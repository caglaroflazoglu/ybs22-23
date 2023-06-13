#include <iostream>

using namespace std;

class ornekSinif
{
    int sayi;
    public:
        ornekSinif(int x)
        {
            sayi=x;
        }
        void yaz()
        {
            cout<<"sayi: "<<sayi<<endl;
        }

        ~ornekSinif()
        {
            cout<<"son islemler"<<endl;
        }

};

int main()
{
    int a=10;
    int* p;

    if(a==10)
    {
      int x=20;
      cout<<"&x: "<<&x<<endl;
      p=&x;
    }

    cout<<"x: "<<*p<<" p:"<<p<<endl;

    int b;
    int c;
    int d=30;

    cout<<"b: "<<b<<" &b:"<<&b<<endl;
    cout<<"c: "<<c<<" &c:"<<&c<<endl;
    cout<<"d: "<<d<<" &d:"<<&d<<endl;
    cout<<"x: "<<*p<<" p:"<<p<<endl;



    return 0;
}
