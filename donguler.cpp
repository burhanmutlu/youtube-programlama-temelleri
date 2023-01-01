#include <iostream>
using namespace std;
int main()
{    
    bool durum = true;
    int sayi = 0;

    for (int i=0;i<10 ;i++) {
        cout << "merhaba " << i+1 << endl;
    }

    while (durum) {
        sayi = sayi + 1;
        cout << "merhaba dunya" << endl;
        if(sayi > 10) {
            durum = false;
        }
    }

    int x =0;
    while (x < 5) {
        cout << x++ << endl;
    }

    int j=6;
    do {
        cout << j << endl;
        j=j+1;
    } while(j<5);
    






    return 0;
}