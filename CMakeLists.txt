cmake_minimum_required(VERSION 2.8.12)

project(estop LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(Qt5_DIR "/home/jiangbo/Qt/5.13.1/gcc_64/lib/cmake/Qt5")
find_package(Qt5 COMPONENTS Core Quick REQUIRED)
find_package(Protobuf REQUIRED)

file(GLOB my_include_directories ${PROJECT_SOURCE_DIR}/modules/)
include_directories(${my_include_directories})
include_directories(${Protobuf_INCLUDE_DIRS})
file(GLOB my_src_files ${PROJECT_SOURCE_DIR}/modules/*/*/*.cc)


add_executable(${PROJECT_NAME} ${my_src_files} "main.cpp" "udpSender.cc" "qml.qrc")

target_link_libraries(${PROJECT_NAME} ${Protobuf_LIBRARIES} Qt5::Core Qt5::Quick)
