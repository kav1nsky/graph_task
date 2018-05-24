cmake_minimum_required(VERSION 3.10)
project(GraphInterface)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(GraphInterface
        .idea/codeStyles/Project.xml
        .idea/GraphInterface.iml
        .idea/misc.xml
        .idea/modules.xml
        .idea/workspace.xml
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/GraphInterface
        cmake-build-debug/GraphInterface.cbp
        cmake-build-debug/Makefile
        CArcGraph.cpp
        CArcGraph.h
        CListGraph.cpp
        CListGraph.h
        CMakeLists.txt
        CMatrixGraph.cpp
        CMatrixGraph.h
        CSetGraph.cpp
        CSetGraph.h
        GeneralGraphInterface.h
        main.cpp)
