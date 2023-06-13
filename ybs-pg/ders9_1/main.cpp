#include <iostream>

using namespace std;

class ornekSinif{

    int sayi;
    void gizli()
    {
        cout<<sayi<<endl;
    }

    public:
        int deger;
        void degerata(int x)
        {
            sayi=x;
        }

        void yaz()
        {
            gizli();
        }
};

int main()
{
    ornekSinif x;

    x.degerata(10);
    x.deger=20;
    x.yaz();

    return 0;
}
