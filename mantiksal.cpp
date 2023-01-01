#include <iostream>
using namespace std;
int main()
{
  // &&, ||, !

    int yas;
    string ad;
    int kilo;

    cout << "yas, ad, ve kilo bilgilerini giriniz:" << endl;
    cin >> yas >> ad >> kilo;

    if (ad == "burhan" || ad == "kamil") {
        cout << "adiniz burhan veya kamildir" << endl;
    } else if (yas >= 20 && ad == "ali") {
        cout << "yasiniz 20den buyuk ve adiniz burhan" << endl;
    } else if( !(kilo <= 70)) {
        cout << "kilonuz 70 den buyuktur" << endl;
    } else {
        cout << "bunlardan hicbiri degil" << endl;
    }







     return 0;
}