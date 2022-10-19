#include <iostream>
//Soal 24 Buku Matdiskrit Munir Rinaldi
using namespace std;

int main() {
	int a;
	int count=0;
	cout << "Antara bilangan bulat  1 - 300" <<endl;
	for (a=1;a<=300;a++){
		if (((a%3==0) && (!((a%5==0) || (a%7==0))))){
			count++;
			cout << "Hasil "<<count <<" = " <<a <<endl;
		}
	}
	cout << "Jumlah yang habis dibagi 3 tetapi tidak habis dibagi 5 dan 7 = " <<count <<endl;
	return 0;
}