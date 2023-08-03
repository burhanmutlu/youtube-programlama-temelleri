#ifndef CONVERTBINARY_HPP
#define CONVERTBINARY_HPP

#include<fstream>

struct Bolme {
	int bolum;
	int kalan;
};

int* binaryCevir(int value);

void printBinary(int* binary, std::ofstream& file);

#endif