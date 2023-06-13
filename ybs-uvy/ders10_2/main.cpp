#include <iostream>

using namespace std;

int ikiliArama(int A[], int boyut, int aranan)
{
    int tur=1;
    int ortadaki, sol=0, sag=boyut-1;
    while(sol<=sag)
    {
        cout<<"Tur: "<<tur++<<endl;
        ortadaki = (sol+sag)/2;
        if(aranan==A[ortadaki])
        {
            return ortadaki;
        }else if(aranan > A[ortadaki])
        {
            sol=ortadaki+1;
        }else
        {
            sag=ortadaki-1;
        }
    }
    return -1;
}

int main()
{
    int d[20]={2,5,9,10,24,36,47,56,78,84,98,105,234,412,543,589,632,764,892,999};
    int indis=ikiliArama(d,20,999);
    if(indis>0)
    {
        cout<<"Aranan terim "<<indis<<" indisinde yer almaktadir"<<endl;

    }else
    {
        cout<<"Bulunamadi!"<<endl;
    }

    return 0;
}
