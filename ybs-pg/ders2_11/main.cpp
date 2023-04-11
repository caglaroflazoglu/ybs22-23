#include <iostream>

using namespace std;

int toplama(int a, int b)
{
    int c=a+b;
    cout<<a<<"+"<<b<<"="<<c<<endl;

    return c;
}


int main()
{
    int sonuc = toplama(4,5);
    cout<<"Sonuc: "<<sonuc<<endl;

    sonuc = toplama(sonuc,3);
    cout<<"Sonuc: "<<sonuc<<endl;

    toplama(sonuc,1);

    return 0;
}
