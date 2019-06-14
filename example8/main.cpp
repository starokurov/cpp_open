#include <iostream>

#include <thread>

int main(int, char**) {

    std::cout << "Hello from the CMake example!" << std::endl;

    auto f = []() {
        std::cout << "I am lambda!" << std::endl;
    };

    f();

    std::thread thr{f};
    thr.join();

    return 0; 
}