cmake_minimum_required(VERSION 3.28)
project(lab_inheritance)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab_inheritance main.cpp
        IFile.h
        MyData.h
        MyDataFile.cpp
        MyDataFile.h
)
