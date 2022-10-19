#include <iostream>
//Soal 23 Buku Matdiskrit Munir Rinaldi
using namespace std;

int main() {
	int a;
	int count=0;
	cout << "Antara bilangan bulat  1 - 300 (Termasuk 1 dan 300)" <<endl;
	for (a=1;a<=300;a++){
		if(!((a%3==0) ||(a%5==0))){
			count++;
			cout << "Hasil "<<count <<" = " <<a <<endl;
		}
	}
	cout << "Jumlah yang tidak habis dibagi 3 atau 5 = " <<count <<endl;
	return 0;
}