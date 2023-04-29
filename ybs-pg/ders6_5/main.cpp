#include <iostream>

using namespace std;

class denemesinifi
{
    public:
    void yaz()
    {
        cout<<"Merhaba"<<endl;
    }

    denemesinifi() // kurucu
    {
        cout<<"Kurucu calisti"<<endl;
    }

    ~denemesinifi() // yikici
    {
        cout<<"Yikici/Yok edici calisti"<<endl;
    }
};

int main()
{
    denemesinifi d1;
    cout<<"degisken tanimlandi"<<endl;
    d1.yaz();
    cout<<"fonksiyon calisti"<<endl;

    denemesinifi d2;

    return 0;
}
