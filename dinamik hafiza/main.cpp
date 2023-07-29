#include<iostream>
#include<stdlib.h>

using namespace std;

/*
dinamik hafıza heap üzerinde-dinamik hafıza-int * deneme = (int*)malloc(5);
dizi ise stack hafıza üzerinde-sabit boyut-eğer istenirse eski dizi silinip eskisinin iki katı kadar yenisi oluşturulur.-int deneme[5]

*/

int main()
{   
    int size=5;

    int* deneme = (int*)malloc(size);

    cout << "int boyutu:" << sizeof(int*) <<endl;

    deneme = (int*)malloc(size*2);
    for(int i=0; i<size*2;i++){
        cout << "adres:" << &(deneme[i]) << endl;
        deneme[i] = i;
    }
    
    for(int i=0; i<size*2;i++){
        cout << deneme[i] << endl;
    }

    int* p = (int*)malloc(1);
    cout << "degerleri giriniz" << endl;
    int i=0;
    while(!(p[i] == -1) ) {
        cin >> p[i];
    }
    


    
    



    return 0;
}