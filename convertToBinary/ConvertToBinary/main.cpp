#include<iostream>
#include<string>
#include<fstream>
#include"convertBinary.hpp"

using namespace std;

int main() {
	
	string str;
	int value;
	cout << "lutfen cevirmek istediginiz metni giriniz:" << endl;
	getline(cin, str);

	ofstream binaryIcerik("binary.txt");

	if ( binaryIcerik.is_open() ) {
		for (int i = 0; i < str.length(); i++) {
			value = (int)str[i];
			printBinary(binaryCevir(value), (ofstream&)binaryIcerik);
		}
		binaryIcerik.close();
	}
	else {
		cout << "dosya acilamadi" << endl;
	}


	return 0;
}