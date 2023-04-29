#include <iostream>

using namespace std;

class denemesinifi
{
    public:
    void yaz()
    {
        cout<<"Merhaba"<<endl;
    }
    denemesinifi()
    {
        cout<<"Kurucu calisti"<<endl;
    }
};

int main()
{
    denemesinifi d1;
    d1.yaz();

    return 0;
}
