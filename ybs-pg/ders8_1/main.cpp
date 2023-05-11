#include <iostream>

using namespace std;

int main()
{
    int sayi=10;

    int* p = &sayi; // adres bilgisini tutmak icin kullanilan degisken,

    cout<<"sayi: "<<sayi<<endl;
    cout<<"adres sayi: "<<&sayi<<endl;
    cout<<"p nin ici: "<<p<<endl;
    cout<<"p nin adresi: "<<&p<<endl;

    cout<<"*p: "<<*p<<endl; // sayi degerine git

    *p=60;
    cout<<"*p: "<<*p<<endl;
    cout<<"sayi: "<<sayi<<endl;








    return 0;
}
