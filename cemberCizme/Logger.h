#pragma once

#include <string>

class Logger
{
protected:
	std::ofstream logger;
	
public:
	Logger();
	Logger(std::string log);
	void addLog(std::string log);
	std::string getTime();
};

