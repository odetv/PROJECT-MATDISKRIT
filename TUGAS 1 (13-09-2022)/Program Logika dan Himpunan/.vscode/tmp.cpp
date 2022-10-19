#include <iostream>

using namespace std;

int a = 3;
int b = 2;
bool hasil;

int main()
{
    cout <<"Nama  : I Gede Gelgel Abdiutama\n";
    cout <<"Kelas : A\n";
    cout <<"NIM   : 2115101014\n";
    cout <<"MK    : Matematika Diskrit\n";
    cout <<"TUGAS 01 (IMPLEMENTASI MENYELESAIKAN OPERATOR LOGIKA C++)\n\n\n";

    cout <<"DIKETAHUI :" << endl;
    cout <<"A = " <<a<< endl;
    cout <<"B = " <<b<< endl << endl << endl;
    
    cout <<"HASIL :" << endl << endl;
    cout <<"1. AND\n"; //benar jika kedua nilai benar, salah jika salah satu nilai salah
    hasil = (a == 3) && (b == 2); //benar dan benar = benar (1)
    cout << hasil << endl;
    hasil = (a == 4) && (b == 2); //salah dan benar = salah (0)
    cout << hasil << endl;
    hasil = (a == 3) && (b == 3); //benar dan salah = salah (0)
    cout << hasil << endl;
    hasil = (a == 4) && (b == 3); //salah dan salah = salah (0)
    cout << hasil << endl << endl;

    cout <<"2. OR\n"; //benar jika salah satu nilai benar, salah jika kedua nilai salah
    hasil = (a == 3) || (b == 2); //benar dan benar = benar (1)
    cout << hasil << endl;
    hasil = (a == 4) || (b == 2); //salah dan benar = benar (1)
    cout << hasil << endl;
    hasil = (a == 3) || (b == 3); //benar dan salah = benar (1)
    cout << hasil << endl;
    hasil = (a == 4) || (b == 3); //salah dan salah = salah (0)
    cout << hasil << endl << endl;

    cout <<"3. NOT\n"; //benar jika nilai bukan benar, salah jika nilai bukan salah
    hasil = !(a == 3); //pernyataan nilai a tidak sama dengan 3 adalah salah
    cout << hasil << endl;
    hasil = !(b == 3); //pernyataan nilai b tidak sama dengan 3 adalah benar
    cout << hasil << endl << endl;

    cout <<"4. IMPLIKASI\n"; //jika a maka b
    bool x1=true, y1=true;
    cout << "Jika " << x1 << ", maka " << y1 <<" = " << x1 << endl;
    bool x2=true, y2=false;
    cout << "Jika " << x2 << ", maka " << y2 <<" = " << y2 << endl;
    bool x3=false, y3=true;
    cout << "Jika " << x3 << ", maka " << y3 <<" = " << y3 << endl;
    bool x4=false, y4=false;
    cout << "Jika " << x4 << ", maka " << y4 <<" = " << x1 << endl;

    return 0;
}