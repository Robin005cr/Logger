/*
 * project   : https://github.com/Robin005cr/Logger
 * file name : WarningHandler.cpp
 * author    : Robin CR
 * mail id   : robinchovallurraju@gmail.com
 * portfolio : https://robin005cr.github.io/
 *
 * Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
 * Suggestions for improvements or better methods are always welcome and appreciated.
 * I value constructive feedback and aim to continuously improve the quality of the work.
 *
 */
#include "handler/WarningHandler.hpp"
#include "FileHandler.hpp"
using namespace std;
void WarningHandler::LOG_WARNING(const string &warningMessage,const string& filePath, int lineNumber)
{

    FileHandler::writeToLog(warningMessage, "Warning",filePath, lineNumber);
}