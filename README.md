# **ESTOP TES Program** 


[//]: # (Image References)

[screenshot]: ./screenshot/gui.JPG


1. Install necessary dependancy:
```console
	foo@bar:~ $ sudo apt-get install autoconf automake libtool curl make g++ unzip cmake build-essential git libgl1-mesa-dev 
```
2. Install protobuf development kit:
```console
	foo@bar:~ $ git clone https://github.com/protocolbuffers/protobuf.git
	foo@bar:~ $ cd protobuf
	foo@bar:~ $ git submodule update --init --recursive
	foo@bar:~ $ ./autogen.sh
	foo@bar:~ $ ./configure
	foo@bar:~ $ make
	foo@bar:~ $ sudo make install
	foo@bar:~ $ sudo ldconfig
```
3. Download QT:
```console
	foo@bar:~ $ wget http://download.qt.io/official_releases/online_installers/qt-unified-linux-x64-online.run
	foo@bar:~ $ chmod +x qt-unified-linux-x64-online.run 
	foo@bar:~ $ ./qt-unified-linux-x64-online.run
```
4. Install QT:
	- keep clicking next/skip
	- use default installation folder(/home/your_username/Qt)
	- select component Qt5.13->Desktop gcc 64-bit
	- Waiting for installation finishing
4. Pull and build test program:
```console
	foo@bar:~ $ git clone git://github.com/JiangboYu13/EStop.git
	foo@bar:~ $ cd EStop
	foo@bar:~ $ python proto_gen.py modules/planning/proto/planning.proto
	foo@bar:~ $ mkdir build && cd build
	foo@bar:~ $ cmake ../
	foo@bar:~ $ make 

```
5. run test program:
```console
	foo@bar:~ $ cd ../bin
	foo@bar:~ $ ./estop
```
	- Enter ip address and port number for destination and then click send. 
	- Click the circle button to togglle estop state during sending. 

![screenshot][screenshot]
	


