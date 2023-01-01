#include <iostream>

using namespace std;

int main() {

    int N = 5;

    for( int i=0; i<N; i++ ) {
        for (int j=0; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "-----------";

    for( int i=N; i>0; i-- ) {
        for (int j=0; j<i; j++) {
            cout <<"j'nin degeri:" << j <<"i'nin degeri:" << i << endl;
            cout << "*";
        }
        cout << endl;
    }

}