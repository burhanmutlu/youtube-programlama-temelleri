#include <iostream>
using namespace std;
int main()
{

    int durum;
    int a, b;

    cout << "iki sayi giriniz:" << endl;
    cin >> a >> b;
    cout << "hangi islemi yapmak istersiniz?" << endl;
    cout << "1. toplama" << endl;
    cout << "2. carpma" << endl;
    cin >> durum;

    switch (durum) {
        case 1:
            cout << a+b << endl;
            break;
        case 2:
            cout << a*b << endl;
            break;
        default:
            cout << "yanlis deger girdiniz" << endl;
            break;
    }







    return 0;
}