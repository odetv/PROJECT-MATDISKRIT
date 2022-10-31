#include <iostream>

using namespace std;

int dataA[20];
int dataB[20];
int a, b, i, j;

int main()
{
	awal:
	system("cls");
	cout <<"-----------------------------------------\n";
    cout <<"MATAKULIAH MATEMATIKA DISKRIT\n";
    cout <<"TUGAS 02 (PROGRAM HIMPUNAN C++)\n";
    cout <<"ANGGOTA KELOMPOK :\n";
    cout <<"1. I Gede Gelgel Abdiutama (2115101014)\n";
    cout <<"2. Subhan Maulana (2115101016)\n";
    cout <<"3. Bagus Aji Andarwira (2115101051)\n";
    cout <<"-----------------------------------------\n\n\n";
    
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
 	if(a<=b)
	{
		if(dataA[i]=dataB[j]){			
			for(i=0; i<a; i++){
				for(j=0; j<b; j++){	
				}				
			}
			cout << "A subset B";
		}else{
			cout << "A bukan subset B" <<endl;
		}
	}
	else if(b<=a)
	{
		if(dataB[j]=dataA[i]){			
			for(j=0; j<b; j++){
				for(i=0; i<a; i++){
				}
			}
			cout << "B subset A";
		}else{
			cout << "B bukan subset A" <<endl;	
			}
	}
	cout<<"}"<<endl;
 	
 	cout <<"\n5. HASIL SELISIH A dan B\n";
 	cout <<"   - Selisih A - B = {";
 		for(i=0; i<a; i++){
  			for (i=0; i<a; i++){
  				if(dataA[i]==dataB[j]){
  					break;
			  	}
   			}
   			if(j==b){
  				cout << dataA[i]<< ",";
		  	}
  		}
  		cout <<"}"<<endl;
	 	cout <<"   - Selisih B - A = {";
	 	for(j=0; j<b; j++){
  			for (i=0; i<a; i++){
  				if(dataB[j]==dataA[i]){
  					break;
			  	}
   			}
   			if(i==a){
  				cout << dataB[j]<< ",";
		  	}
  		}
 	cout <<"}"<<endl;
 	cout <<endl<<endl;
 	char exit;
 	cout <<"Apakah anda ingin mengulang program? (Y/T) : ";
    cin >>exit;
    if (exit=='y')
    {
        goto awal;
    }
 	return 0;
}