#include <iostream>
#include <string>
using namespace std;

class kapi
{
    string kapiadi;
    public:
        void isim(string adi)
        {
            kapiadi=adi;
        }
        void pencere_ac()
        {
            cout<<kapiadi<<" kapinin penceresi acildi"<<endl;
        }
        void pencere_kapat()
        {
            cout<<kapiadi<<" kapinin penceresi Kapandi"<<endl;
        }
        void kilit_ac()
        {
            cout<<kapiadi<<" kapinin kilidi acildi"<<endl;
        }
        void kilit_kapat()
        {
            cout<<kapiadi<<" kapinin kilidi kapatildi"<<endl;
        }
};

class otomobil
{
    kapi k[4];
    public:
        otomobil()
        {
            k[0].isim("sag on");
            k[1].isim("sag arka");
            k[2].isim("sol on");
            k[3].isim("sol arka");
        }
        void motorcalistir()
        {
            cout<<"motor calistir"<<endl;
        }
        void motordurdur()
        {
            cout<<"motor durdur"<<endl;
        }

        void kapilarivecamlarikapat()
        {
            for(int i=0;i<4;i++)
            {
                k[i].pencere_kapat();
                k[i].kilit_kapat();
            }
        }
};


int main()
{
    otomobil abc;
    abc.motorcalistir();
    abc.motordurdur();
    abc.kapilarivecamlarikapat();
    return 0;
}
