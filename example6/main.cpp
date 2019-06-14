#include "config.h"
#include "sumLib.h"

#include <iostream>

int main(int, char**) {
    std::cout << "Hello from main!" << std::endl;
    sumLib::sum(1, 3);
    std::cout << "Lib verion:" << sumLib::getVersion() << std::endl;

    std::cout << "Main version: " << (PROJECT_VERSION) << std::endl;

    return 0;
}