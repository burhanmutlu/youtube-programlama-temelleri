#include <iostream>
using namespace std;
int main()
{
    int sonuc = 1;
    int n = 6;
    for(int i=n; i>=1; i--) {
        sonuc = sonuc * i;
    }

    cout << n << ".faktoriyelin sonucu:" << sonuc << endl;







            return 0;
}