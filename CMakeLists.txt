cmake_minimum_required(VERSION 2.8)

project(estop LANGUAGES CXX)
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(Qt5_DIR "~/Qt/5.13.1/gcc_64/lib/cmake/Qt5")
if (CMAKE_VERSION VERSION_LESS "3.1")
  if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")
  endif ()
else ()
  set (CMAKE_CXX_STANDARD 11)
endif ()


find_package(Qt5 COMPONENTS Core Quick REQUIRED)
find_package(Protobuf REQUIRED)

file(GLOB my_include_directories ${PROJECT_SOURCE_DIR}/modules/)
include_directories(${my_include_directories})
include_directories(${Protobuf_INCLUDE_DIRS})
file(GLOB my_src_files ${PROJECT_SOURCE_DIR}/modules/*/*/*.cc)


add_executable(${PROJECT_NAME} ${my_src_files} "main.cpp" "udpSender.cc" "qml.qrc")

target_link_libraries(${PROJECT_NAME} ${Protobuf_LIBRARIES} Qt5::Core Qt5::Quick)
