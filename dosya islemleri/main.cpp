#include<iostream>
#include<fstream>
#include<math.h>

using namespace std;

int main()
{
    // dosya oluşturma
    ofstream myFile("deneme.txt");

    if(myFile.is_open()) {
        for(int i=0; i<=360; i++) {
            myFile << "sin("<<i<<")'nin degeri: " << sin((double)(i*M_PI)/180) << endl;
        }
        myFile.close();

    } else {
        cout << "dosya acilamadi." << endl;
    }

    //dosya okuma
    string satir;
    ifstream myfile("deneme.txt");
    if(myfile.is_open()) {
        while (getline(myfile,satir))
        {
            cout << satir<<endl;
        }
        

    } else {
        cout << "dosya acilamadi." << endl;
    }




    return 0;
}