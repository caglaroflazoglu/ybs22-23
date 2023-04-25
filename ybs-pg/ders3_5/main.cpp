#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char isim[100];

    cout<<"Isminiz: ";
    cin>>isim;

    cout<<"Girmis oldugunuz isim: "<<isim<<endl;

    cout<<"boyut: "<<sizeof(isim)/sizeof(char)<<endl;

    int uzunluk = strlen(isim);
    cout<<"uzunluk: "<<uzunluk<<endl;

    return 0;
}
