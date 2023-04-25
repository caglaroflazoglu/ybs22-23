#include <iostream>

using namespace std;

int main()
{
    int deger=65; //0x41->A
    char c = (char)deger;

    cout<<"cikti: "<<c<<endl;

    int* pdeger;
    pdeger = &deger; // deger degiskeninin adres bilgisini aldik

    char ch2 = (char) *pdeger; // *pdeger ile deger ayni degisken
    cout<<"ch2: "<<ch2<<endl;


    double d=1234; // 8 byte |-|-|-|-|-|-|-|-|
    cout<<"sizeof(d): "<<sizeof(d)<<endl;

    int* sayi; // |-|-|-|-|

    sayi= (int*) &d;
    cout<<"sizeof(*sayi): "<<sizeof(*sayi)<<endl;


    cout<<"d: "<<d<<endl;
    cout<<"sayi: "<<sayi<<" *sayi: "<<*sayi<<endl;

    sayi+=1;
    cout<<"sayi: "<<sayi<<"* sayi: "<<*sayi<<endl;

    (*sayi)=(*sayi)+103; // bu degisim 0.1 lik artisa karsilik gelmektedir

    cout<<"&d: "<<&d<<endl;
    cout<<"sayi: "<<sayi<<endl;

    cout<<"*sayi: "<<*sayi<<endl;
    cout<<"d: "<<d<<endl;


    return 0;
}
