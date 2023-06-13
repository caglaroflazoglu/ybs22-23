#include <iostream>

using namespace std;

class ornek
{
    public:
        int deger;
        void yaz()
        {
            cout<<"this: "<<this<<endl;
            cout<<"deger: "<<deger<<endl;
            cout<<"(*this).deger: "<<(*this).deger<<endl;
            cout<<"this->deger: "<<this->deger<<endl;

        }
};

int main()
{
    ornek x;
    x.deger=10;

    cout<<"x'in adresi: "<<&x<<endl;
    x.yaz();
    cout<<"x.deger: "<<x.deger<<endl;

    return 0;
}
