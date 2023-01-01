#include <iostream>
using namespace std;
int main()
{
    /*
    +,-,*,/,%, tip dönüşüm, ++a,a++
    
    */

    int sayi1 = 5;
    int sayi2 = 10;

    int sonuc = sayi1 + sayi2;
    int sonuc2 = sayi2 - sayi1;
    int sonuc3 = sayi1 * sayi2;
    float sonuc4 = (float)sayi1 / sayi2;
    int sonuc5 = sayi2 % sayi1;

    /* cout << "toplam sonucu: " << sonuc << endl;
    cout << "cikarma sonucu: " << sonuc2 << endl;
    cout << "carpma sonucu: " << sonuc3 << endl;
    cout << "bolme sonucu: " << sonuc4 << endl;
    cout << "mod sonucu: " << sonuc5 << endl; */


    int sayi = 1;
    cout << sayi << endl; //1
    cout << sayi++ << endl; // sayi = sayi + 1;
    cout << sayi << endl;

    cout << --sayi << endl;

    cout << ++sayi << endl;

    sayi = sayi + 1;

    sayi += 1;
    sayi -= 1;
    sayi = sayi - 1;






    return 0;
}