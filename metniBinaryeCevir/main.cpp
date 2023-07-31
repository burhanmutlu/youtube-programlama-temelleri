#include<iostream>
#include<fstream>

using namespace std;

struct Bolme {
    int bolum;
    int kalan;
}b;
//print binary
void binaryGoster(int *binary) {
    for(int i=0; i<8; i++) {
        cout << binary[i];
    } cout << endl;
}
//decimal to binary
int* binaryeCevir(int deger) {
    static int binary[8]={0,0,0,0,0,0,0,0};
    int i=0;
    do
    {
        b.bolum = deger / 2;
        b.kalan = deger-(b.bolum*2);
        binary[7-i]=b.kalan;
        deger = b.bolum;
        i++;
    } while (b.bolum>0);

    return binary; 
}

int main() {

    string str;
    int deger;
    cout << "lutfen cevirmek istediginiz metni giriniz." << endl;
    getline(cin, str);

    ofstream binaryIcerik("binary-icerik.txt");

    if(binaryIcerik.is_open()) {
        for(int i=0;i<str.length(); i++) {
            deger = (int)str[i];
            for(int i=0; i<8; i++) {
                binaryIcerik << binaryeCevir(deger)[i];
            } 
        }
        binaryIcerik.close();

    } else {
        cout << "dosya acilamadi." << endl;
    }

    return 0;
}