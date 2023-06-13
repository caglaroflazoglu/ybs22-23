#include <iostream>

using namespace std;

void yaz()
{
    cout<<"parametre gelmedi!"<<endl;
}
void yaz(int x)
{
    cout<<"sayi: "<<x<<endl;
}

void yaz(int x, int y)
{
    cout<<"sayi-1: "<<x<<" sayi-2: "<<y<<endl;
}

void yaz(int x, int y, int z)
{
    cout<<"sayi-1: "<<x<<" sayi-2: "<<y<<" sayi-3: "<<z<<endl;
}

void yaz(int x, double y)
{
    cout<<"sayi: "<<x<<" dsayi: "<<y<<endl;
}

void yaz(int x, float y)
{
    cout<<"sayi: "<<x<<" fsayi: "<<y<<endl;
}

int main()
{
    yaz();
    yaz(1,2,3);
    yaz(3);
    yaz(2,5);
    yaz(3,(float)2.6);
    yaz(3,2.6);
    return 0;
}
