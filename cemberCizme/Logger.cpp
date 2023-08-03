#include "Logger.h"

#include <fstream>
#include <iostream>

Logger::Logger() {
	logger.open("log.txt", std::ios_base::app);

	if (logger.is_open()) {

	}
	else {
		std::cout << "dosya acilamadi" << std::endl;
	}
}

Logger::Logger(std::string log) {
	Logger();
	
}

void Logger::addLog(std::string log) {

}

std::string Logger::getTime() {
	return "";
}

