#include <iostream>

using namespace std;

class sinifA
{
    public:
        int A;
        void yaz()
        {
            cout<<"sinifA"<<endl;
        }
};

class sinifB
{
    public:
        int B;
        void yaz()
        {
            cout<<"sinifB"<<endl;
        }
        void yaz2()
        {
            cout<<"sinifB-yaz2()"<<endl;
        }
};

class sinif: public sinifA, public sinifB{
public:
    int C;
    void yaz()
    {
        cout<<"sinif"<<endl;
    }
};

int main()
{
    sinif s;
    s.A=10;
    s.B=20;
    s.C=30;
    s.yaz();
    sinifA sA;
    sinifB sB;
    sA.yaz();
    sB.yaz();
    s.yaz2();

    return 0;
}
