#include <iostream>

using namespace std;

class islemler
{
    private:
        int sayi;
        float xyz;
        void merhabayaz()
        {
            cout<<"merhaba iste"<<endl;
        }

    public:
        void yazsayi()
        {
            cout<<"sayi: "<<sayi<<endl;
            merhabayaz();
        }

        void sayiata(int x)
        {
            sayi=x;
        }

        int sayigetir()
        {
            return sayi;
        }
};


int main()
{
    islemler i1,i2;

    i1.sayiata(5);
    i2.sayiata(15);
    //i1.sayi=10;
    //i1.xyz=1.0;

    i1.yazsayi();
    i2.yazsayi();

//    i1.merhabayaz(); // private oldugu icin erisemeyiz

    cout<<"i1.sayigetir(): "<<i1.sayigetir()<<endl;
    cout<<"i2.sayigetir(): "<<i2.sayigetir()<<endl;

    return 0;
}
