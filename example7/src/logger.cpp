#include "logger.h"

#include <iomanip>
#include <iostream>

#include <ctime>


namespace {

    void printDateTime(std::ostream& os) {
        std::time_t t = std::time(nullptr);
        std::tm tm;
        localtime_s(&tm, &t);
        os << std::put_time(&tm, "%Y-%m-%d %H:%M:%S");
    }

    void writeMessage(const std::string& msg, const char* prefix) {
        printDateTime(std::cout);
        std::cout << ' ' << prefix << ' ' << msg << std::endl;
    }

}

namespace logger {

    void info(const std::string& msg) {
        writeMessage(msg, "[Info]");
    }

    void warning(const std::string& msg) {
        writeMessage(msg, "[Warning]");
    }

    void error(const std::string& msg) {
        writeMessage(msg, "[Error]");
    }

    void fatal(const std::string& msg) {
        writeMessage(msg, "[Fatal]");
    }

}