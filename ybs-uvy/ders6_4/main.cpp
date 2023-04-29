#include <iostream>

using namespace std;

void enbuyukenkucuk(int sayilar[], int adet)
{
    int enbuyuk=sayilar[0];
    int enkucuk=sayilar[0];

    for(int i=1; i<adet; i++)
    {
        if(enbuyuk<sayilar[i])
        {
            enbuyuk=sayilar[i];
        }

        if(enkucuk>sayilar[i])
        {
            enkucuk=sayilar[i];
        }
    }
    cout<<"Dizideki en kucuk sayi: "<<enkucuk<<endl;
    cout<<"Dizideki en buyuk sayi: "<<enbuyuk<<endl;
}

int main()
{
    int sayi[]={1,15,9,22,3,88,0,9,21};

    int adet = sizeof(sayi)/sizeof(int);
    cout<<"adet: "<<adet<<endl;
    enbuyukenkucuk(sayi,adet);
    return 0;
}
