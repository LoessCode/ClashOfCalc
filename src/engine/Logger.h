#pragma once

#include <chrono>
#include <iostream>

enum class LogLevel {
	ERROR,
	WARN, 
 INFO
};



class Logger {
public:
	Logger(const Logger&) = delete;
	Logger operator = (const Logger&) = delete;

	static Logger& Instance();
	
	void setLogLevel(LogLevel logLevel);

	void info(const char* message);
	void warn(const char* message);
	void error(const char* message);

private:
	Logger() {};

	LogLevel m_logLevel = LogLevel::INFO;

	void log(const char* message, LogLevel messageLevel);
};