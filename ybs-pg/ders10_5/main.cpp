#include <iostream>

using namespace std;

class ornek
{
    int x,y;
    public:
        ornek(int n)
        {
            x=n;
        }
        ornek(int n, int m)
        { // yapilandirici overload edildi.
            x=n;
            y=m;
        }
        int oku()
        {
           return x;
        }
};

int main()
{
    int x=10;
    int* dx=&x;
    cout<<"x: "<<x<<" *dx: "<<*dx<<endl;

    ornek a(4),b(5),c(1,2);

    ornek* d=&a;
    cout<<"a.oku(): "<<a.oku()<<" (*d).oku(): "<<(*d).oku()<<endl;

    d=&b;
    cout<<"b.oku(): "<<b.oku()<<" (*d).oku(): "<<(*d).oku()<<endl;

    d=&c;
    cout<<"c.oku(): "<<c.oku()<<" d->oku(): "<< d->oku()<<endl; // (*d). yerine d-> kullanilabilir.


    return 0;
}
