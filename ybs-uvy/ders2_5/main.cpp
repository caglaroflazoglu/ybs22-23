#include <iostream>

using namespace std;

int main()
{
    int sayi;

    cout<<"Sayi girin: ";
    cin>>sayi;

    int sayac;

    for(sayac=0;sayac<=sayi;sayac++)
    {
        if(sayac%2==0){
            cout<<sayac<<" sayisi cift"<<endl;
        }
        else
        {
             cout<<sayac<<" sayisi tek"<<endl;
        }
    }

    return 0;
}
