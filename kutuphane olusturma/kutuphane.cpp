#include "kutuphane.hpp"
#include <iostream>

void selamla(char* isim)
{
    std::cout << "char ile selam " << isim << std::endl;
}

void stringSelam(std::string s)
{
    std::cout << "string ile selam " << s << std::endl;
}

Araba::Araba()
{
    std::cout<<"class olusturuldu."<<std::endl;
    hiz=10;
}

void Araba::gazaBas()
{
    hiz++;
}

void Araba::hizGoster()
{
    std::cout << "Arabanin hizi: " << hiz << std::endl;
}
