#include <iostream>

using namespace std;


class ornek
{
    int x,y,z;
    public:
    void ata(int t)
    {
        x=t;
    }
    int getir()
    {
        return x;
    }
};

int main()
{
    int elemansay;
    cout<<"Eleman sayisi:";
    cin>>elemansay;

    //[nesne|nesne|nesne|nesne]

    ornek x;
    cout<<"&x: "<<&x<<endl;

    ornek* p = new ornek[elemansay];

    cout<<"p: "<<p<<endl;

    /*(*p).ata(10);
    cout<<p->getir()<<endl;*/

    /*ornek x;

    cout<<"sizeof(x): "<<sizeof(x)<<endl;
    cout<<"&x: "<<&x<<endl;*/



    //ornek o[elemansay];

    for(int i=0;i<elemansay;i++)
    {
        int deger;
        cout<<(i+1)<<": ";
        cin>>deger;
        (*(p+i)).ata(deger);
    }

    cout<<endl<<"******"<<endl;

    for(int i=0;i<elemansay;i++)
    {
        cout<<(i+1)<<": "<<(*(p+i)).getir()<<endl;
    }

    delete [] p;

    return 0;
}
