#include <iostream>
using namespace std;
int main()
{
    int not1;
    string ad;
    cout << "adinizi ve notunuzu giriniz" << endl;
    cin >> ad >> not1;

    if (not1 >= 60 && not1 <=100) {
        cout << ad << " notunuz: " << not1 << " dersten gectiniz" <<endl;
    } else if (not1<=59 && not1 >=0){
        cout << ad << " notunuz: " << not1 << " dersten kaldiniz" << endl;
    } else {
        cout << "yanlis giris yaptiniz" << endl;
    }










        return 0;
}