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
void FileHandler::writeToLog(const string &message, const string &logType,const string& filePath, int lineNumber)
{
    ofstream logFile(fileName, ios::app);
    if (!logFile.is_open())
    {
        cerr << "Failed to open log file." << endl;
        return;
    }
    auto now = std::chrono::system_clock::now();
    std::time_t now_time = std::chrono::system_clock::to_time_t(now);
    // Format time as [YYYY-MM-DD HH:MM:SS]
    char timeStr[20];
    std::strftime(timeStr, sizeof(timeStr), "%Y-%m-%d %H:%M:%S", std::localtime(&now_time));
    logFile << "[" << timeStr << "] "
            << "[" << logType << "] " << message << endl;
    if (!filePath.empty() && lineNumber > 0)
    {
        logFile << "File: " << filePath << ", Line: " << lineNumber << endl;
    }
    logFile.close();
}