#include <iostream>

using namespace std;

class deneme
{
    int x,y;
    public:
        void atax(int d)
        {
            x=d;
        }
        void atay(int d)
        {
            y=d;
        }
        void yaz()
        {
            cout<<"x: "<<x<<" y:"<<y<<endl;
        }
        void adresleriyaz()
        {
            cout<<"&x: "<<&x<<" &y: "<<&y<<endl;
        }
};


int main()
{
    deneme a,b,c;

    a.atax(10);
    a.atay(20);
    cout<<"a: ";
    a.yaz();
    b.atax(40);
    b.atay(50);
    cout<<"b: ";
    b.yaz();
    cout<<"c: ";
    c.yaz();
    c.adresleriyaz();
    c=a;
    c.adresleriyaz();
    a.atay(200);
    cout<<"a: ";
    a.yaz();
    a.adresleriyaz();
    cout<<"c: ";
    c.yaz();

    return 0;
}
