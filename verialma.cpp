#include <iostream>
using namespace std;
int main()
{
    string ad;
    string soyad;
    soyad = "";
    ad = ""; // 0

    cout << "kullanici adinizi giriniz: " << endl;
    cin >> ad;

    cout << "kullanici soyadinizi giriniz: " << endl;
    cin >> soyad;

    cout << "kullanici: " << ad + " " + soyad << endl;


    return 0;
}