/*
 * project   : https://github.com/Robin005cr/Logger
 * file name : ErrorExecutive.cpp
 * author    : Robin CR
 * mail id   : robinchovallurraju@gmail.com
 * portfolio : https://robin005cr.github.io/
 *
 * Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
 * Suggestions for improvements or better methods are always welcome and appreciated.
 * I value constructive feedback and aim to continuously improve the quality of the work.
 *
 */
#include <iostream>
#include <fstream>
#include "executive/ErrorExecutive.hpp"
int minimumValue = 35;
int maximumValue = 100;
using namespace std;

#define LOG_ERROR(msg) ErrorHandler::LOG_ERROR(msg, __FILE__, __LINE__)
void ErrorExecutive::fileNotFound()
{
    ofstream fileTax("Tax-2021.txt"); // It will create a file if it does not exist.
    

    if (fileTax.is_open())
    {
        LOG_ERROR("File not found: Tax-2021.txt");
    }


}
void ErrorExecutive::bufferOverflow()
{

}
void ErrorExecutive::bufferUnderFlow()
{

}
void ErrorExecutive::dataValidation(int data)
{
    if (data < minimumValue || data > maximumValue)
    {
        LOG_ERROR("Data validation failed: Value out of range");
    }
    else
    {
        cout << "Data is valid: " << data << endl;
    }
}
void ErrorExecutive::preconditon()
{

}