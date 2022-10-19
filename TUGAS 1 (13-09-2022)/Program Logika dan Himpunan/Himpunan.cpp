#include <iostream>

using namespace std;

int dataA[20];
int dataB[20];
int a, b;

int main()
{
	cout <<"Nama  : I Gede Gelgel Abdiutama\n";
    cout <<"Kelas : A\n";
    cout <<"NIM   : 2115101014\n";
    cout <<"MK    : Matematika Diskrit\n";
    cout <<"TUGAS 01 (IMPLEMENTASI MENYELESAIKAN HIMPUNAN C++)\n\n\n";
    
    cout <<"MENENTUKAN JUMLAH DATA A dan B\n";
 	cout <<"Jumlah Data A : ";
	cin >>a;
 	cout <<"Jumlah Data B : ";
 	cin >>b;
	cout <<"\nMENENTUKAN ANGGOTA DATA A dan B\n";
	for(int i=0; i<a; i++){
  		cout <<"Anggota A ke - "<<i<<" = ";
  		cin >>dataA[i];
	}
  	for(int i=0; i<b; i++){
  		cout <<"Anggota B ke - "<<i<<" = ";
  		cin >>dataB[i];
 	}
 	
 	cout << endl << endl << "HASIL :" << endl;
 	cout <<"\n1. HASIL HIMPUNAN DATA A dan B\n";
 	cout <<"Himpunan A = {";
 	for(int i=0; i<a; i++){
  		cout <<dataA[i]<<",";
 	}
 	cout <<"}"<<endl;
 	cout <<"Himpunan B = {";
 	for(int i=0; i<b; i++){
  		cout <<dataB[i]<<",";
	}
 	cout <<"}"<<endl;
 	
 	cout <<"\n2. HASIL IRISAN DATA A dan B\n";
 	cout <<"A Irisan B = {";
 	for(int i=0; i<a; i++){
  		for (int j=0; j<b; j++){
   			if(dataA[i] == dataB[j]){
    			cout <<dataA[i]<<",";
   			}
  		}
 	}
 	cout<<"}"<<endl;
 	
 	cout <<"\n3. HASIL GABUNGAN DATA A dan B\n";
 	cout <<"A Gabungan B = {";
 	for(int i=0; i<a; i++){
  		cout <<dataA[i]<<",";
 	}
 	for(int i=0; i<b; i++){
  		cout <<dataB[i]<<",";
 	}
 	cout <<"}"<<endl;
 	
 	cout <<"\n4. HASIL HIMPUNAN BAGIAN A dan B\n";
 	cout <<"Himpunan Bagian = {";
 	for(int i=0; i<a; i++){
  		cout <<dataA[i]<<",";
 	}
 	for(int i=0; i<b; i++){
  		cout <<dataB[i]<<",";
 	}
 	cout <<"}"<<endl;
 	
 	cout <<"\n5. HASIL SELISIH A dan B\n";
 	cout <<"Selisih = {";
 	for(int i=0; i<a; i++){
  		cout <<dataA[i]<<",";
 	}
 	for(int i=0; i<b; i++){
  		cout <<dataB[i]<<",";
 	}
 	cout <<"}"<<endl;
 	return 0;
}