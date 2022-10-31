#include <iostream>
#include <conio.h>

using namespace std;

int fpb(int a, int b)
{
    if(a==0){
        return b;
    }else if(b==0){
        return a;
    }else{
        return fpb(b, a%b);
    }
}
int kpk(int a, int b){
    return (a*b)/fpb(a,b);
}

int main()
{
    char exit;
    int a,b;
    awal:
    system("cls");
    cout <<"-----------------------------------------\n";
    cout <<"MATAKULIAH MATEMATIKA DISKRIT\n";
    cout <<"TUGAS 02 (PROGRAM FPB & KPK C++)\n";
    cout <<"ANGGOTA KELOMPOK :\n";
    cout <<"1. I Gede Gelgel Abdiutama (2115101014)\n";
    cout <<"2. Orang ke-2 (xxxxxxxxxx)\n";
    cout <<"3. Orang ke-3 (xxxxxxxxxx)\n";
    cout <<"-----------------------------------------\n\n\n";
    cout <<"INPUT NILAI\n";
    cout <<"Masukan Nilai A : ";
	cin>>a;
    cout <<"Masukan Nilai B : ";
	cin>>b;
	cout <<"\n\nHASIL\n";
    cout <<"FPB dari "<<a<<" dan "<<b<<" = "<<fpb(a, b)<<endl;
    cout <<"KPK dari "<<a<<" dan "<<b<<" = "<<kpk(a, b)<<endl;
    cout <<endl<<endl;
    cout <<"Apakah anda ingin mengulang program? (Y/T) : ";
    cin >>exit;
    if (exit=='y')
    {
        goto awal;
    }
return 0;
}