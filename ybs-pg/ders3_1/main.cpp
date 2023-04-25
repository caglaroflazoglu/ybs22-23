#include <iostream>

using namespace std;

int main()
{

    int veri[5];

    int boyut= sizeof(veri)/sizeof(int);

    cout<<"boyut: "<<boyut<<endl;


    for(int sayac=0;sayac<boyut;sayac++)
    {
        cout<<sayac<<". sayiyi girin: ";
        cin>>veri[sayac];
    }

    cout<<endl<<"------"<<endl<<endl;

    veri[3]=300;

    for(int sayac=0;sayac<boyut;sayac++)
    {
        cout<<sayac<<". sayi: "<<veri[sayac]<<endl;
    }

    return 0;
}
