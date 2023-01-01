#include <iostream>
using namespace std;
int main()
{

    
    for(int i=0; i<20; i++ ){
        if(i%4==0){ // 4 8 12 16
            continue;
        }
        cout << i << endl;
        if(i == 15) {
            break;
        }
    }








        return 0;
}