/*
 * project   : https://github.com/Robin005cr/Logger
 * file name : DebugHandler.hpp
 * author    : Robin CR
 * mail id   : robinchovallurraju@gmail.com
 * portfolio : https://robin005cr.github.io/
 *
 * Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
 * Suggestions for improvements or better methods are always welcome and appreciated.
 * I value constructive feedback and aim to continuously improve the quality of the work.
 *
 */
#pragma once
#include<iostream>
#include <string>
#include "FileHandler.hpp"
#define LOG_PREFIX "[DEBUG] "
class DebugHandler final
{
public:
    static void log_debug(const std::string &debugMessage, const string& filePath, int lineNumber);
    static void log_debug(const char *format, const string& filePath, int lineNumber ...);
    // 2. Handle std::ostream-like << syntax
    template <typename T>
    void log_debug(const T &value, const string& filePath, int lineNumber)
    {
        std::ostringstream oss;
        oss << LOG_PREFIX << value;
        std::cout << oss.str() << std::endl;
         FileHandler::writeToLog(oss.str(), "Warning", filePath, lineNumber);
    }
};