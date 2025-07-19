/*
 * project   : https://github.com/Robin005cr/Logger
 * file name : main.cpp
 * author    : Robin CR
 * mail id   : robinchovallurraju@gmail.com
 * portfolio : https://robin005cr.github.io/
 *
 * Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
 * Suggestions for improvements or better methods are always welcome and appreciated.
 * I value constructive feedback and aim to continuously improve the quality of the work.
 *
 */
#include<iostream>
#include "Logger.hpp"
#include "executive/ErrorExecutive.hpp"
#include "FileHandler.hpp"
using namespace std;
int main()
{ 
	cout << "Helloworld";
	FileHandler::createLogFile();
	ErrorExecutive E;
	E.fileNotFound();
	return 0;
}