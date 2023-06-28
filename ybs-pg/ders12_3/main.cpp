#include <iostream>

using namespace std;

class sinifA{

    int x; // private
    protected:
    int y;
    public:
    int z;

};

class sinifB: public sinifA{

    public:
    void islem()
    {
        //x=100; // private
        y=10; // protected
    }

};

class sinifC: public sinifB{

    public:
    void islem1()
    {
        //x=20;
        y=20; //protected (sinifA)
    }

};

int main()
{
    sinifA abc;
    //abc.x=20;
    //abc.y=30;
    abc.z=10;

    sinifB xyz;
    //xyz.y=20;
    xyz.islem();

    sinifC d;
    d.islem();
    d.islem1();
    d.z=50;
    //d.y=20; // protected
    //d.x=10; // private

    return 0;
}
