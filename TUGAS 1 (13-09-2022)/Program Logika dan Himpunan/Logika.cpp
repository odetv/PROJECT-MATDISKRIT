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

    cout << "DIKETAHUI :" << endl;
    cout << "A = " <<a<< endl;
    cout << "B = " <<b<< endl << endl << endl;
    
    cout << "HASIL :" << endl << endl;
    cout <<"-- AND (A dan B)\n"; //benar jika kedua nilai benar, salah jika salah satu nilai salah
    hasil = (a == a) && (b == b); //benar dan benar = benar (1)
    bool a1 = (a == a);
    bool b1 = (b == b);
    cout <<a1<<" dan "<<b1<<" = "<< hasil << endl;
    hasil = (a == !a) && (b == b); //salah dan benar = salah (0)
    bool a2 = (a == !a);
    bool b2 = (b == b);
    cout <<a2<<" dan "<<b2<<" = "<< hasil << endl;
    hasil = (a == a) && (b == !b); //benar dan salah = salah (0)
    bool a3 = (a == a);
    bool b3 = (b == !b);
    cout <<a3<<" dan "<<b3<<" = "<< hasil << endl;
    hasil = (a == !a) && (b == !b); //salah dan salah = salah (0)
    bool a4 = (a == !a);
    bool b4 = (b == !b);
    cout <<a4<<" dan "<<b4<<" = "<< hasil << endl << endl;

    cout <<"-- OR (A atau B)\n"; //benar jika salah satu nilai benar, salah jika kedua nilai salah
    hasil = (a == 3) || (b == 2); //benar dan benar = benar (1)
    bool aa1 = (a == a);
    bool bb1 = (b == b);
    cout <<aa1<<" atau "<<bb1<<" = "<< hasil << endl;
    hasil = (a == 4) || (b == 2); //salah dan benar = benar (1)
    bool aa2 = (a == !a);
    bool bb2 = (b == b);
    cout <<aa2<<" atau "<<bb2<<" = "<< hasil << endl;
    hasil = (a == 3) || (b == 3); //benar dan salah = benar (1)
    bool aa3 = (a == a);
    bool bb3 = (b == !b);
    cout <<aa3<<" atau "<<bb3<<" = "<< hasil << endl;
    hasil = (a == 4) || (b == 3); //salah dan salah = salah (0)
    bool aa4 = (a == !a);
    bool bb4 = (b == !b);
    cout <<aa4<<" atau "<<bb4<<" = "<< hasil << endl << endl;

    cout <<"-- NOT\n"; //benar jika nilai bukan benar, salah jika nilai bukan salah
    hasil = !(a == 3); //pernyataan nilai a tidak sama dengan 3 adalah salah
    bool aaa1 = !(a == a);
    cout <<"A Tidak " <<a<<" = " << hasil << endl;
    hasil = !(b == 3); //pernyataan nilai b tidak sama dengan 3 adalah benar
    bool bbb1 = !(b == !b);
    cout <<"B Tidak " <<a<<" = " << hasil << endl << endl;

    cout <<"-- IMPLIKASI\n"; //jika a maka b
    bool x1=true, y1=true;
    cout << "Jika " << x1 << ", maka " << y1 <<" = " << x1 << endl;
    bool x2=true, y2=false;
    cout << "Jika " << x2 << ", maka " << y2 <<" = " << y2 << endl;
    bool x3=false, y3=true;
    cout << "Jika " << x3 << ", maka " << y3 <<" = " << x1 << endl;
    bool x4=false, y4=false;
    cout << "Jika " << x4 << ", maka " << y4 <<" = " << x1 << endl;

    return 0;
}