#pragma once

#include <string>
#include <fstream>
#include <iostream>
#include <chrono>
#include <iomanip>
#include <ctime>

class SLog {
public:
    SLog(const std::string& logFile = "/tmp/log.txt") : logFile(logFile) {}

    void write(const std::string& message) {
        std::ofstream logStream(logFile, std::ios::app);
        if (!logStream) {
            std::cerr << "Error: Cannot open the file for logging." << std::endl;
            return;
        }

        // Get the current time
        auto now = std::chrono::system_clock::now();
        auto in_time_t = std::chrono::system_clock::to_time_t(now);

        std::tm tm;
        localtime_r(&in_time_t, &tm);

        // Write the timestamp and the message to the log file
        logStream << std::put_time(&tm, "%Y-%m-%d %H:%M:%S") << " - " << message << std::endl;
    }

private:
    std::string logFile;
};
