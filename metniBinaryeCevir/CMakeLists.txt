cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_COMPILER "C:/MinGW/bin/g++.exe")
set(CMAKE_C_COMPILER "C:/MinGW/bin/gpp.exe")


project(metniBinaryeCevir)

set(PROJECT_DIR ${CMAKE_SOURCE_DIR})

set(PROJECT_INCLUDE_DIR ${PROJECT_DIR}/include)

set(PROJECT_SOURCE_DIR ${PROJECT_DIR}/src)

set(PROJECT_SOURCES
            ${PROJECT_SOURCE_DIR}/binary.cpp
            ${PROJECT_SOURCE_DIR}/main.cpp
            )

set(PROJECT_HEADERS 
            ${PROJECT_INCLUDE_DIR}/binary.hpp
            )

include_directories(${PROJECT_INCLUDE_DIR})

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})