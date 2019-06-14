#include "config.h"
#include "lib.h"

#include <iostream>

int main(int, char**) {
    std::cout << "Hello from main!" << std::endl;
    lib::makeSomeSuperJob();
    std::cout << "Lib verion:" << lib::getVersion() << std::endl;

    std::cout << "Main version: " << (PROJECT_VERSION) << std::endl;

    return 0;
}