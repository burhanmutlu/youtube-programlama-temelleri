#include "Debug.h"
#include <fstream>
#include <iostream>

Debug::Debug() {
	logger.open("debug.log", std::ios_base::app);
	t = new Time();

	if (logger.is_open()) {
		// dosya acildi
	}
	else {
		// dosya acilamadi
	}
}

void Debug::log(std::string message) {
	logger << "[" << t->getTime() << "] " << " \"" << message << "\"" << std::endl;
}
