#include <iostream>

using namespace std;

int main()
{
    int sayi;

    cout<<"Sayi girin: ";
    cin>>sayi;

    int sayac;

    int toplam=0;

    sayac=0;

    while(sayac<sayi)
    {
        if(sayac%2==1)
        {
            toplam+=sayac;
            cout<<sayac<<endl;
        }

        sayac++; // sayac=sayac+1;
    }

    cout<<"Toplam: "<<toplam<<endl;

    return 0;
}
