#pragma once

#include "Time.h"
#include <string>
#include <fstream>

class Debug {
public:
	Debug();
	void log(std::string message);
private:
	std::ofstream logger;
	Time* t;
};

