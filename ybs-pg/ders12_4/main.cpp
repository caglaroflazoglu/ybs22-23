#include <iostream>

using namespace std;
class ders
{
    string ders_adi;
    int vizenot, finalnot;
    public:
    ders()
    {
        cout<<"Dersin Adi: ";
        cin>>ders_adi;

        cout<<"Vize: ";
        cin>>vizenot;

        cout<<"Final: ";
        cin>>finalnot;
    }
    int ortalama()
    {
        return vizenot*0.4+finalnot*0.6+0.5;
    }
    string harfhesapla()
    {
        string harfler[]={"AA","BA","BB","CB","CC","DC","DD","FD"};
        int harfnot[] ={90,80,70,65,60,55,50,40};
        if(finalnot<30){
            return "FF";
        }
        int ort = ortalama();
        for(int i=0;i<8;i++)
        {
            if(ort>=harfnot[i])
            {
                return harfler[i];
            }
        }
        return "FF";
    }
    string adi()
    {
        return ders_adi;
    }
};


class ogrenci
{
    string adsoyad;
    string ogrno;
    ders dersler[3];
    public:
    ogrenci(string ograd, string ogno)
    {
        adsoyad = ograd;
        ogrno = ogno;
    }

    void notlar()
    {
        for(int i=0;i<3;i++)
        {
            cout<<dersler[i].adi()<<" isimli dersin "<<"ort:"<<dersler[i].ortalama()<<" harf:"<<dersler[i].harfhesapla()<<endl;
        }
    }

};


int main()
{
    ogrenci ahmet("Ahmet","123456");
    ahmet.notlar();

    //ders pg;
    //cout<<pg.adi()<<" isimli dersin "<<"ort:"<<pg.ortalama()<<" harf:"<<pg.harfhesapla()<<endl;

    return 0;
}
