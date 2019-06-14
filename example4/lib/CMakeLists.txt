cmake_minimum_required(VERSION 3.5)

project(Library VERSION 0.0.2)

configure_file(
        config.h.in 
        ${CMAKE_CURRENT_BINARY_DIR}/config.h
)

add_library(lib STATIC lib.cpp lib.h)
set_target_properties(
        lib PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON
)
target_include_directories(
        lib 
        PRIVATE 
        ${CMAKE_CURRENT_BINARY_DIR}
)