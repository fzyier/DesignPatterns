#include "chain_of_responsibility.hpp"

// ! Logger
void Logger::setNextLogger(Logger* logger) 
{
  nextLogger = logger;
}
void Logger::logMessage(const std::string& message, int level) 
{
  if (level >= getLogLevel()) 
  {
      writeLog(message);
  }
  if (nextLogger != nullptr) 
  {
      nextLogger->logMessage(message, level);
  }
}
// ! InfoLogger
int InfoLogger::getLogLevel() 
{
  return 1;
}
void InfoLogger::writeLog(const std::string& message) 
{
  std::cout << "Info Logger: " << message << '\n';
}
// ! WarningLogger
int WarningLogger::getLogLevel() 
{
  return 2;
}
void WarningLogger::writeLog(const std::string& message) 
{
  std::cout << "Warning Logger: " << message << '\n';
}
// ! ErrorLogger
int ErrorLogger::getLogLevel()  
{
  return 3;
}
void ErrorLogger::writeLog(const std::string& message)  
{
  std::cout << "Error Logger: " << message << '\n';
}