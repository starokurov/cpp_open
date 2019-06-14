#pragma once

#include <string>

namespace logger {

    void info(const std::string& msg);

    void warning(const std::string& msg);

    void error(const std::string& msg);

    void fatal(const std::string& msg);

}