cmake_minimum_required(VERSION 3.5)

project(Example2)

# Also possible, 
# version.h will not be presented in the project tree.
# add_executable(version main.cpp version.cpp)

# Also possible
# add_executable(version main.cpp version.cpp version.h)

set(SOURCES 
        main.cpp 
        version.cpp
)

set(HEADERS
        version.h
)

add_executable(version ${SOURCES} ${HEADERS})
set_target_properties(
        version PROPERTIES
        CXX_STANDARD 11
        CXX_STANDARD_REQUIRED ON
)
