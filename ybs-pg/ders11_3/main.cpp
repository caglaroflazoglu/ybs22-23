#include <iostream>

using namespace std;

class sinifA
{
    public:
        int A;
};

class sinifB
{
    public:
        int B;
};

class sinif: public sinifA, public sinifB{
    public:
        int C;
};

int main()
{
    sinif s;
    s.A=10;
    s.B=20;
    s.C=30;
    return 0;
}
