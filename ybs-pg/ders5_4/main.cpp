#include <iostream>

using namespace std;

class Kure
{
    private:
        int a;
    protected:
        int b;

    public:
        float r,x,y,z;
        float hacim()
        {
            // protected ve private degiskenler
            // sinif icerisinde kullanilabilir
            a=20;
            b=40;
            return (r*r*r*4*3.14/3);
        }
        float alan()
        {
            return (4*3.14*r*r);
        }

}k;

int main()
{
    //k.a degiskeni private oldugu icin erisemiyoruz
    //k.a=10;
    //cout<<"k.a:"<<k.a<<endl;

    //k.b degiskeni protected oldugu icin erisemiyoruz
    //k.b=20;
    //cout<<"k.b:"<<k.b<<endl;

    k.r=5;
    //
    k.x=10;
    k.y=2;
    k.z=4;
    //

    cout<<"Hacim: "<<k.hacim()<<endl;
    cout<<"Alan: "<<k.alan()<<endl;

    return 0;
}
