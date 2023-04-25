#include <iostream>

using namespace std;

int main()
{

    int x=10;
    int* px = &x; // xin adresini px in icerisine yaziyoruz

    //*px ile x ayni bellek bolgesini isaret eder

    cout<<"x: "<<x<<" adresi: "<<&x<<endl;
    cout<<"px: "<<px<<" adresi: "<<&px<<" *px:"<<*px<<endl;


    x=20;

    cout<<"x: "<<x<<" adresi: "<<&x<<endl;
    cout<<"px: "<<px<<" adresi: "<<&px<<" *px:"<<*px<<endl;


    *px=30;

    cout<<"x: "<<x<<" adresi: "<<&x<<endl;
    cout<<"px: "<<px<<" adresi: "<<&px<<" *px:"<<*px<<endl;



    int sayi=1769174117; //0x69737465 //-> iste

    cout<<"sayi: "<<sayi<< " adres &sayi: "<<&sayi<<endl;

    char* ch = (char*)&sayi;

    cout<<"*ch: "<<*ch<<endl;
    cout<<"*ch+1: "<<*(ch+1)<<endl;
    cout<<"*ch+2: "<<*(ch+2)<<endl;
    cout<<"*ch+3: "<<*(ch+3)<<endl;


    return 0;
}
