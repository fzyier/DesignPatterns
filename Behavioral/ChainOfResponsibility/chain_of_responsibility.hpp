#pragma once

#include <iostream>
#include <string>

// Handler
class Logger 
{
protected:
  Logger* nextLogger;

public:
  Logger() : nextLogger(nullptr) {}
  void setNextLogger(Logger* logger);
  void logMessage(const std::string& message, int level);

protected:
  virtual int getLogLevel() = 0;
  virtual void writeLog(const std::string& message) = 0;
};

// Concrete Handlers
class InfoLogger : public Logger 
{
protected:
  int getLogLevel() override;
  void writeLog(const std::string& message) override;
};

class WarningLogger : public Logger 
{
protected:
  int getLogLevel() override;
  void writeLog(const std::string& message) override;
};

class ErrorLogger : public Logger 
{
protected:
  int getLogLevel() override;
  void writeLog(const std::string& message) override;
};