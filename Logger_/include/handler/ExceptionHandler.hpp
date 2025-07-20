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
#include <string>
class ExceptionHandler
{
public:
    static void LOG_EXCEPTION(const std::string &exceptionMessage, const std::string &filePath, int lineNumber);
};