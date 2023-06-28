#include <iostream>

using namespace std;

class sinifA
{
    public:
        void yaz()
        {
            cout<<"sinifA-yaz()";
        }
};

class sinifB
{
    public:
        void yaz()
        {
            cout<<"sinifB-yaz()";
        }
};

class sinif: public sinifA, public sinifB
{
    public:
        void yaz1()
        {
            cout<<"sinif-yaz()"<<endl;
        }
};

int main()
{
    sinif s;
    s.yaz();
    return 0;
}
