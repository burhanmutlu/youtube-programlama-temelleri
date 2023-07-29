#ifndef KUTUPHANE_HPP
#define KUTUPHANE_HPP

#include <string>

void selamla(char* isim);

void stringSelam(std::string s);

class Araba
{
    private:
        int hiz;

    public:

        Araba();
        
        void gazaBas();
        void hizGoster();

};


#endif