#include <iostream>

using namespace std;

int main()
{
    char isim[]={'A','B','C','D','E'};


    cout<<"ismin boyutu (byte): "<<sizeof(isim)<<" char turu boyutu: "<<sizeof(char)<<endl;


    int x[20];

    cout<<"x degiskeni boyutu (byte):"<<sizeof(x)<<" int turu boyutu: "<<sizeof(int)<<endl;
    cout<<"x in eleman sayisi: "<<sizeof(x)/sizeof(int)<<endl;


    char isim2[] = "CAGLAR";

    cout<<"isim2: "<< isim2 <<" boyutu: "<<sizeof(isim2)<<endl;

    cout<<(int)isim2[6]<<endl;
    cout<<(int)isim2[0]<<endl; // C -> 0x43 => 16*4+3=67


    for(int i=0;i<sizeof(isim2);i++)
    {
        cout<<i<<"::"<<isim2[i]<<"::"<<(int)isim2[i]<<endl;
    }

    return 0;
}
