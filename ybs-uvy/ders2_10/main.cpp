#include <iostream>

using namespace std;

int carpma(int sayi1,int sayi2)
{
    return sayi1*sayi2;
}

int main()
{
    int sonuc=carpma(5,10);
    cout<<"Sonuc:"<<sonuc<<endl;

    cout<<"İslem: 123x321="<<carpma(123,321)<<endl;

    return 0;
}
