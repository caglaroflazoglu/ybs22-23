#include <iostream>

using namespace std;

class ogrenci
{
    string ad,soyad;
    int vizenot,finalnot;
    float ortalama;

    public:
        void verial()
        {
            cout<<"Ad: ";
            cin>>ad;
            cout<<"Soyad: ";
            cin>>soyad;

            cout<<"Vize: ";
            cin>>vizenot;
            cout<<"Final: ";
            cin>>finalnot;
            ortalama = vizenot*0.4+finalnot*0.6;
            ortalama = (int)(ortalama+0.5); //yuvarlama yapar
        }

        float ortver()
        {
            return ortalama;
        }

        void yaz()
        {
            cout<<ad<<" "<<soyad<<" vize: " <<vizenot<<" final: "<<finalnot<<" ortalama:"<<ortalama<<endl;
        }

        void harfdegeryaz()
        {
            string harfler[] ={"AA","BA","BB","CB","CC","DC","DD","FD"};
            int sinirlar[] ={90,80,70,65,60,50,40,30};
            string harfdeger="FF";

            if(finalnot>=30)
            {
                for(int i=0;i<sizeof(sinirlar)/sizeof(int);i++)
                {
                    if((int)ortalama>=sinirlar[i])
                    {
                        harfdeger=harfler[i];
                        break;
                    }
                }
            }
            cout<<"Harf degeri: "<<harfdeger<<endl;
        }
};


int main()
{
    ogrenci x[2];

    for(int i=0;i<2;i++)
    {
        x[i].verial();
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<2;i++)
    {
        x[i].yaz();
        x[i].harfdegeryaz();
    }

    return 0;
}
