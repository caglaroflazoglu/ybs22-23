#include <iostream>

using namespace std;

class ornek
{
    int x;
    public:
    void ata(int t)
    {
        x=t;
    }
    int getir()
    {
        return x;
    }
};



int main()
{
    ornek o[2];

    o[0].ata(5);
    o[1].ata(15);

    cout<<"0: "<<o[0].getir()<<endl;
    cout<<"1: "<<o[1].getir()<<endl;

    return 0;
}
