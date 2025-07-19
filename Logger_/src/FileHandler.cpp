/*
 * project   : https://github.com/Robin005cr/Logger
 * file name : FileHandler.hpp
 * author    : Robin CR
 * mail id   : robinchovallurraju@gmail.com
 * portfolio : https://robin005cr.github.io/
 *
 * Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
 * Suggestions for improvements or better methods are always welcome and appreciated.
 * I value constructive feedback and aim to continuously improve the quality of the work.
 *
 */
#include "FileHandler.hpp"
string FileHandler::fileType;
string FileHandler::fileName;
int FileHandler::setNum;
void FileHandler::createLogFile()
{
    fileType = "txt";
#ifdef _WIN32
    string logPath = "C:/Users/ASUS/Desktop/Professional_repo/Logger/Logger_/logFiles";
#else
    string logPath = "/home/username/Logger/Logger_/logFiles";
#endif
    fileName = logPath + "/logger." + fileType;
    ofstream outFile(fileName);

    if (!outFile.is_open())
    {
        cerr << "Failed to create file: " << fileName << "\n";
    }
}
void FileHandler::writeToLog(const string &message, const string &logType)
{
    ofstream logFile(fileName, ios::app);
    if (!logFile.is_open())
    {
        cerr << "Failed to open log file." << endl;
        return;
    }
    logFile << "[" << logType << "] " << message << endl;
    logFile.close();
}