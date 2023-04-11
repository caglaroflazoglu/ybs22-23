#include <iostream>

using namespace std;

int main()
{
    int sayi;

    cout<<"Sayi girin: ";
    cin>>sayi;

    int sayac;

    int toplam=0;

    for(sayac=0;sayac<=sayi;sayac++)
    {
        if(sayac%2==1){ // 1 3 5 7 9
            toplam+=sayac; // toplam=toplam+sayac;
            cout<<sayac<<endl;
        }
    }

    cout<<"Toplam: "<<toplam<<endl;

    return 0;
}
