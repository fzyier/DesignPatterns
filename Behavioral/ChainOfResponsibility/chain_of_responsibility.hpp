#pragma once

#include <iostream>
#include <string>

// Handler
class Logger 
{
protected:
  Logger* next_logger_;

public:
  Logger() : next_logger_(nullptr) {}
  void set_next_logger(Logger* logger);
  void log_message(const std::string& message, int level);

protected:
  virtual int get_log_level() = 0;
  virtual void write_log(const std::string& message) = 0;
};

// Concrete Handlers
class InfoLogger : public Logger 
{
protected:
  int get_log_level() override;
  void write_log(const std::string& message) override;
};

class WarningLogger : public Logger 
{
protected:
  int get_log_level() override;
  void write_log(const std::string& message) override;
};

class ErrorLogger : public Logger 
{
protected:
  int get_log_level() override;
  void write_log(const std::string& message) override;
};