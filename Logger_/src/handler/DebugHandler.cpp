/*
 * project   : https://github.com/Robin005cr/Logger
 * file name : DebugHandler.cpp
 * author    : Robin CR
 * mail id   : robinchovallurraju@gmail.com
 * portfolio : https://robin005cr.github.io/
 *
 * Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
 * Suggestions for improvements or better methods are always welcome and appreciated.
 * I value constructive feedback and aim to continuously improve the quality of the work.
 *
 */
#include "handler/DebugHandler.hpp"
#include "FileHandler.hpp"
using namespace std;

#include <iostream>
#include <sstream>
#include <cstdarg>
#include <cstdio>



// 1. Handle string literal or const char*
void DebugHandler::log_debug(const char* message) {
    std::cout << LOG_PREFIX << message << std::endl;
}


// 3. Handle printf-style format
void DebugHandler::log_debug(const char* format, ...) {
    char buffer[1024];  // You can increase this size if needed
    va_list args;
    va_start(args, format);
    vsnprintf(buffer, sizeof(buffer), format, args);
    va_end(args);
    std::cout << LOG_PREFIX << buffer << std::endl;
}

void DebugHandler::LOG_DEBUG(const string &debugMessage,const string& filePath, int lineNumber)
{

    FileHandler::writeToLog(debugMessage, "Warning",filePath, lineNumber);
}