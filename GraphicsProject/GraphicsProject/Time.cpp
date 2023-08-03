#include "Time.h"

#include <string>

std::string Time::getTime() {
	#pragma warning(disable : 4996)

	time_t rawtime;
	struct tm* timeinfo;
	char buffer[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	strftime(buffer, sizeof(buffer), "%d-%m-%Y %H:%M:%S", timeinfo);
	std::string str(buffer);

	return str;
}

void Time::beginTime() {
	begin = clock();
}

void Time::endTime() {
	end = clock();
}

std::string Time::differenceTime() {
	std::string str = std::to_string(end - begin);
	str.append(" ms'de çalýþtý");
	return str;
}
