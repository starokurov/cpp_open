cmake_minimum_required(VERSION 3.5)

project(Main VERSION 0.0.6)

configure_file(
        config.h.in 
        ${CMAKE_CURRENT_BINARY_DIR}/config.h
)

add_executable(mainLib main.cpp)
set_target_properties(
        mainLib PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON
)
target_include_directories(
        mainLib 
        PRIVATE 
        ${CMAKE_CURRENT_BINARY_DIR}
)
find_package(sumLib CONFIG REQUIRED)
target_link_libraries(mainLib SumLib::sumLib)