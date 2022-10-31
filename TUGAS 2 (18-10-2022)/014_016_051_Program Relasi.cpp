#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int n, i, j, kolom;
int matriks[10][10];

void menu()
{
	cout <<"------------------------------------------------------------------------------\n";
    cout <<"MATAKULIAH MATEMATIKA DISKRIT\n";
    cout <<"TUGAS 02 (PROGRAM RELASI MATRIKS SIMETRIS, REFLEKTIF & FUNGSI CEILING C++)\n";
    cout <<"ANGGOTA KELOMPOK :\n";
    cout <<"1. I Gede Gelgel Abdiutama (2115101014)\n";
    cout <<"2. Subhan Maulana (2115101016)\n";
    cout <<"3. Bagus Aji Andarwira (2115101051)\n";
    cout <<"------------------------------------------------------------------------------\n\n\n";
    cout <<"MENU PROGRAM\n";
    cout <<"1. Matriks Simetris\n";
    cout <<"2. Reflektif\n";
    cout <<"3. Fungsi Ceiling\n";
    cout <<"4. Keluar\n\n\n";
}

void inputMatriks(){
	cout <<"INPUT NILAI\n";
    cout <<"Masukkan Ukuran Matriks : ";
	cin >>n;
    cout <<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout <<"Masukkan Baris Ke-"<<i+1<<" Kolom Ke-"<<j+1<<" : ";
        	cin >>matriks[i][j];
        }
    }
    cout <<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        	cout <<matriks[i][j]<<" ";
        }
        cout <<endl;
    }
    cout <<endl;
}

void matriksSimetris()
{
	for(j=0; j<n; j++){ 
		if(i!=j){
		    if((matriks[i][j]==matriks[j][i])){
		    	cout <<"Hasil = Matriks Simetris\n";
		    	cout <<"\nTekan ENTER untuk mengulang program...";
		    }else{
		    	cout <<"Hasil = Bukan Matriks Simetris\n";
		    	cout <<"\nTekan ENTER untuk mengulang program...";
		    }
		}
	}
    getch();
    system("cls");
    menu();
}

void reflektif()
{
	for(j=0; j<n; j++){
		if(i==j){
		    if(matriks[i][j]==1){
				cout <<"Hasil = Matriks Reflektif\n";
				cout <<"\nTekan ENTER untuk mengulang program...";
			}else{
				cout <<"Hasil = Bukan Matriks Reflektif\n";
				cout <<"\nTekan ENTER untuk mengulang program...";
			}
		}
	}
	getch();
    system("cls");
    menu();
}

void fungsiCeiling()
{
	double n;
	cout <<"Masukkan Bilangan : ";
    cin >> n;
    double ce=ceil(n);
    cout <<"Hasil Ceiling "<<n<<" = "<<ce<<endl;
    cout <<"\nTekan ENTER untuk mengulang program...";
	getch();
    system("cls");
    menu();
}

int main()
{
    int pilih;
    char z;
    awal:
    menu();
    cout <<"Masukkan Pilihan : ";
    cin >> pilih;
    if (pilih==1){
    	system("cls");
    	inputMatriks();
    	matriksSimetris();
	}
	if (pilih==2){
    	system("cls");
    	inputMatriks();
    	reflektif();
	}
	if (pilih==3){
    	system("cls");
    	fungsiCeiling();
	}
	if (pilih==4){
    	system("cls");
    	int exit;
    	cout <<"Apakah Anda Yakin Keluar Dari Program Ini? (Y/N) : ";
    	cin >> exit;
    	if (exit=='y'||exit=='Y'){
    		system("cls");
    		cout <<"Terimakasih telah menggunakan program ini.";
		}
		else{
			system("cls");
			goto awal;
		}
	}
	else{
		cout <<"\nTekan ENTER untuk mengulang program...";
		getch();
		system("cls");
		goto awal;
	}
    return 0;  
}
