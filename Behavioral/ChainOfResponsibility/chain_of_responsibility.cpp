#include "chain_of_responsibility.hpp"

// ! Logger
void Logger::set_next_logger(Logger* logger) 
{
  next_logger_ = logger;
}
void Logger::log_message(const std::string& message, int level) 
{
  if (level >= get_log_level()) 
  {
      write_log(message);
  }
  if (next_logger_ != nullptr) 
  {
      next_logger_->log_message(message, level);
  }
}
// ! InfoLogger
int InfoLogger::get_log_level() 
{
  return 1;
}
void InfoLogger::write_log(const std::string& message) 
{
  std::cout << "Info Logger: " << message << '\n';
}
// ! WarningLogger
int WarningLogger::get_log_level() 
{
  return 2;
}
void WarningLogger::write_log(const std::string& message) 
{
  std::cout << "Warning Logger: " << message << '\n';
}
// ! ErrorLogger
int ErrorLogger::get_log_level()  
{
  return 3;
}
void ErrorLogger::write_log(const std::string& message)  
{
  std::cout << "Error Logger: " << message << '\n';
}