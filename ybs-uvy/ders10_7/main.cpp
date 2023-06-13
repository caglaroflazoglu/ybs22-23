#include <iostream>

using namespace std;

void yaz(int x[], int boyut)
{
    for(int i=0;i<boyut;i++)
    {
        cout<<x[i]<<"\t";
    }
    cout<<endl;
}

void yerdegistir(int& a, int& b)
{
    int gecici=a;
    a=b;
    b=gecici;
}

int parca(int dizi[], int dusuk, int yuksek)
{
    int deger=dizi[yuksek];
    int i=dusuk-1;

    for(int j=dusuk;j<=yuksek-1;j++)
    {
        if(dizi[j]<=deger)
        {
            i++;
            yerdegistir(dizi[i],dizi[j]);
        }
    }
    yerdegistir(dizi[i+1],dizi[yuksek]);
    return (i+1);
}

void hizliSirala(int dizi[], int dusuk, int yuksek)
{
    if(dusuk<yuksek)
    {
        int degerIndex=parca(dizi,dusuk,yuksek);
        hizliSirala(dizi,dusuk,degerIndex-1);
        hizliSirala(dizi,degerIndex+1,yuksek);
    }
}

int main()
{
    int dizi[10] ={4,20,1,15,8,6,60,21,3,9};
    cout<<"Siralanmamis dizi:"<<endl;
    yaz(dizi,10);
    hizliSirala(dizi,0,9);
    cout<<"Siralanmis dizi:"<<endl;
    yaz(dizi,10);
    return 0;
}
