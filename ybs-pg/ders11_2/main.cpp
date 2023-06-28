#include <iostream>

using namespace std;

class ust_sinif
{
    int x; //private
    protected:
        int y;
    public:
        int z;
};

class sinif1: public ust_sinif
{
    public:
        void islem()
        {
            //x=10; private
            y=20; //protected, kalitim ile ulasilabilir ama nesneden ulasilamaz
            z=30;
        }
};

int main()
{
    sinif1 s1;
    //s1.x=100; //private
    //s1.y=200; //protected
    s1.z=300;
    return 0;
}
