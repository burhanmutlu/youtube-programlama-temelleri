#pragma once

#include <string>
#include <ctime>

class Time {
public:
	std::string getTime();
	void beginTime();
	void endTime();
	std::string differenceTime();
private:
	clock_t begin;
	clock_t end;
};

