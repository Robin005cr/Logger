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
void DebugHandler::LOG_DEBUG(const string &debugMessage,const string& filePath, int lineNumber)
{

    FileHandler::writeToLog(debugMessage, "Warning",filePath, lineNumber);
}