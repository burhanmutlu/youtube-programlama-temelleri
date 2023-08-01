#include"binary.hpp"

void binaryGoster(int* binary, std::ofstream& file) {
    for (int i = 0; i < 8; i++) {
        file << binary[i];
    }
}

int* binaryeCevir(int value) {
    static int binary[8] = { 0,0,0,0,0,0,0,0 };
    Bolme b;
    int i = 0;
    do {
        b.bolum = value / 2;
        b.kalan = value - (b.bolum * 2);
        binary[7 - i] = b.kalan;
        value = b.bolum;
        i++;
    } while (b.bolum > 0);

    return binary;
}