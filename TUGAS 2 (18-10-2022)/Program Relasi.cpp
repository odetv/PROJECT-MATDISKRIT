#include <iostream>
#include <conio.h>
#include<math.h>

using namespace std;

void menu()
{
	cout <<"Nama  : I Gede Gelgel Abdiutama\n";
    cout <<"Kelas : A\n";
    cout <<"NIM   : 2115101014\n";
    cout <<"MK    : Matematika Diskrit\n";
    cout <<"TUGAS 02 (PROGRAM SIMETRIS, REFLEKTIF & FUNGSI CEILING C++)\n\n";
    cout <<"MENU PROGRAM\n";
    cout <<"1. Matriks Simetris\n";
    cout <<"2. Reflektif\n";
    cout <<"3. Fungsi Ceiling\n";
    cout <<"4. Keluar\n\n\n";
}

void matriksSimetris()
{
	int baris, kolom, matriks[10][10];
    cout <<"Masukkan jumlah baris : ";
	cin >>baris;
    cout <<"Masukkan jumlah kolom : ";
    cin >>kolom;
    cout <<endl;
    
    for(int i=0; i<baris; i++){
            for(int j=0; j<kolom; j++){
            cout <<"Masukkan baris "<<i+1<<" kolom "<<j+1<<" : ";
            cin >>matriks[i][j];
            }
    }
    cout <<endl;
    
    for(int i=0; i<baris; i++){
            for(int j=0; j<kolom; j++){
            cout <<matriks[i][j]<<" ";
            }
            cout <<endl;
    }
    cout <<endl;
     
    if(baris==kolom){
    cout <<"Matriks Simetris";
    }else{
    cout <<"Bukan Matriks Simetris";
    }
    getch();
    system("cls");
    menu();
}

void reflektif()
{
	
	
	getch();
    system("cls");
    menu();
}

void fungsiCeiling()
{
	double n;
	cout <<"Masukkan bilangan = ";
    cin >> n;
    double ce=ceil(n);
    cout <<"Hasil Ceiling "<<n<<" = "<<ce;
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
    cout <<"Masukkan pilihan : ";
    cin >> pilih;
    if (pilih==1){
    	system("cls");
    	matriksSimetris();
	}
	if (pilih==2){
    	system("cls");
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