#include "logger.h"

#include <iostream>

int main(int, char**) {

    std::cout << "It is a simple example of the logger usage" << std::endl;

#if (WITH_INFO)
    logger::info("This is an info message");
#endif
    logger::warning("This is a warning message");
    logger::error("This is an error message");
    logger::fatal("This is a fatal error message");

    return 0;
}