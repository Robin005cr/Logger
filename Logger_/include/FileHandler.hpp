/*
 * project   : https://github.com/Robin005cr/Logger
 * file name : ExceptionHandler.hpp
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
#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
using namespace std;
class FileHandler
{
private:
    static int setNum;
    static string fileName;
    static string fileType;

public:
    static void createLogFile();
    static void writeToLog(const string &message, const string &logType,const string& filePath, int lineNumber);
};
