#ifndef BINARY_HPP
#define BINARY_HPP

#include<fstream>

struct Bolme {
    int bolum;
    int kalan;
};

//print binary
void binaryGoster(int* binary, std::ofstream& file);

//decimal to binary
int* binaryeCevir(int value);

#endif