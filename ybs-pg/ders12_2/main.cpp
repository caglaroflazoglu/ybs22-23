#include <iostream>

using namespace std;

class tekerlek
{
    int no;
    public:
    tekerlek(int deger)
    {
        no=deger;
    }

    int basincgetir()
    {
        return 32;
    }

    void tekersisir()
    {
        cout<<no<<" nolu tekerlek sisirildi!"<<endl;
    }

    void bilgiver()
    {
        cout<<no<<" nolu tekerlek "<<basincgetir()<<" basinca sahiptir!"<<endl;
    }
};


int main()
{
    tekerlek onsol(1), onsag(2), arkasol(3), arkasag(4);

    onsol.bilgiver();
    arkasag.bilgiver();

    return 0;
}
