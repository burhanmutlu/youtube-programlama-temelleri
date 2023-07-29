#include<iostream>
#include<ctime>
#include<unistd.h>
//windows için ise #include<Windows.h>

using namespace std;

int main() {

    /*int ilkZaman = time(NULL);

    for(int i=0; i<1000000; i++) {
        cout << "a" << endl;
    }

    int sonZaman = time(NULL);


    int fark = sonZaman - ilkZaman;

    cout << "iki zaman arasındaki fark " << fark << " saniyedir." << endl;*/


    /*time_t zaman;

    zaman = time(NULL);

    cout << zaman << " 1970 den itibaren geçen zaman" << endl;*/


    time_t timer;
    struct tm zaman = {0};

    zaman.tm_hour = 0;
    zaman.tm_min = 0;
    zaman.tm_sec = 0;
    zaman.tm_year = 0;
    zaman.tm_mon = 6;
    zaman.tm_mday=27;

    time(&timer);

    double ikinci = difftime(timer, mktime(&zaman));

    cout << "iki zaman arasındaki fark : " << ikinci << endl;

    









    return 0;
}