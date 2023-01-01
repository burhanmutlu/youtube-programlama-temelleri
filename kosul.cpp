#include <iostream>
using namespace std;
int main()
{
    int yas;

    cout << "yasinizi giriniz: " << endl;
    cin >> yas;

    if (yas > 18) {
        cout << "yasiniz 18 den buyuktur." << endl;
    } else if(yas > 15) {
        cout << "yasiniz 15 den buyuktur ama 18 den  kucuktur." << endl;
    } else {
        cout << "yasiniz 15 den kucuktur." << endl;
    }










 return 0;
}