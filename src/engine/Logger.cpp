#include "Logger.h"



Logger& Logger::Instance()
{
	static Logger logger;
	return logger;
}

void Logger::setLogLevel(LogLevel logLevel)
{
	m_logLevel = logLevel;
}

void Logger::info(const char* message)
{
	if (m_logLevel == LogLevel::INFO)
	{
		log(message, LogLevel::INFO);
	}
}

void Logger::warn(const char* message)
{
	if (m_logLevel >= LogLevel::WARN)
	{
		log(message, LogLevel::WARN);
	}
}

void Logger::error(const char* message)
{
	if (m_logLevel >= LogLevel::ERROR)
	{
		log(message, LogLevel::ERROR);
	}
}

void Logger::log(const char* message, LogLevel messageLevel)
{
	//Current time in system_clock::time_point format
	auto currentTime = std::chrono::system_clock::now();
	//Current time in time_t format
	auto currentTime_t = std::chrono::system_clock::to_time_t(currentTime);

	auto formattedTime = std::put_time(std::localtime(&currentTime_t), "%H:%M,%Ss");



	std::cout << "[" << logLevelLabels[messageLevel] << " @ " << formattedTime << "] " << message << '\n';
}


