cmake_minimum_required(VERSION 3.5)

project(SumLibrary VERSION 0.0.3)

configure_file(
        config.h.in 
        ${CMAKE_CURRENT_BINARY_DIR}/config.h
)

add_library(sumLib STATIC sumLib.cpp sumLib.h)
set_target_properties(
        sumLib PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON
)
target_include_directories(
        sumLib 
        PRIVATE 
        ${CMAKE_CURRENT_BINARY_DIR}
)

install(TARGETS sumLib EXPORT sumLibTargets
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        INCLUDES DESTINATION include
)
install(FILES sumLib.h DESTINATION include)

install(EXPORT sumLibTargets
        FILE sumLibConfig.cmake
        NAMESPACE SumLib::
        DESTINATION lib/cmake/SumLib
)