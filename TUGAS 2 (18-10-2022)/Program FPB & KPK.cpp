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
    cout <<"Nama  : I Gede Gelgel Abdiutama\n";
    cout <<"Kelas : A\n";
    cout <<"NIM   : 2115101014\n";
    cout <<"MK    : Matematika Diskrit\n";
    cout <<"TUGAS 02 (PROGRAM FPB & KPK C++)\n\n\n";
    cout <<"Masukan Nilai A = "; cin>>a;
    cout <<"Masukan Nilai B = "; cin>>b;
    cout <<"\nFPB dari "<<a<<" dan "<<b<<" = "<<fpb(a, b);
    cout <<"\nKPK dari "<<a<<" dan "<<b<<" = "<<kpk(a, b)<<endl;
    cout <<endl<<endl;
    cout <<"Apakah anda ingin mengulang program? (Y/T) : ";
    cin >>exit;
    if (exit=='y')
    {
        goto awal;
    }
return 0;
}