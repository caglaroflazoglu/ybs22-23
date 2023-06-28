#include <iostream>

using namespace std;
class sinifA
{
    int a; // private
    public:
    sinifA(int deger)
    {
        a=deger;
    }
    sinifA()
    {
        a=0;
    }

    int getir()
    {
        return a;
    }

};

int main()
{
    sinifA x, y(10);

    cout<<"x.getir(): "<<x.getir()<<endl;
    cout<<"y.getir(): "<<y.getir()<<endl;
    return 0;
}
