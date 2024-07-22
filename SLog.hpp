#pragma once

#include <string>

class SLog {
public:
    SLog(const std::string& logFile = "/tmp/log.txt");
    void write(const std::string& message);

private:
    std::string logFile;
};

