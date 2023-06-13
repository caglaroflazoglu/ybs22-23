#include <iostream>

using namespace std;

class ornekSinif
{
    int sayi;
    public:
        ornekSinif(int x)
        {
            sayi=x;
            cout<<"olusturuldu: "<<sayi<<endl;
        }
        void yaz()
        {
            cout<<"sayi: "<<sayi<<endl;
        }

        ~ornekSinif()
        {
            cout<<"siliniyor: "<<sayi<<endl;
        }
};

int main()
{
    ornekSinif a(2),b(3),c(4);
    cout<<"bitti"<<endl;

    if(1==1)
    {
        ornekSinif x(50);
        cout<<"if bitti"<<endl;
    }
    cout<<"kapaniyor"<<endl;


    return 0;
}
