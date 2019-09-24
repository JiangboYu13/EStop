from subprocess import call
import os
import sys
compiled = set()
added = set()
def compile_proto(file_name):
    if file_name not in compiled:
        compiled.add(file_name)
    else:
        return
    added_dir = os.path.dirname(file_name)
    if added_dir not in added:
        added.add(added_dir)
    status = call(['protoc', '--cpp_out=./',file_name])
    if status != 0:
        print('{} compilation failed'.format(file_name))
    print('{} compiled'.format(file_name))
    f_p = open(file_name, 'r+')
    while(True):
        text_line = f_p.readline()
        if len(text_line)==0:
            break
        text_line = text_line.strip(' ').replace(';', '')
        if text_line[:6] == 'import':
            sub_file_path = text_line.split('"')[-2]
            compile_proto(sub_file_path)
    f_p.close();   
if __name__== "__main__":
    compile_proto(sys.argv[1])