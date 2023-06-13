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

void arayaSokma(int D[], int N){
    int i, k, ekle,tur=1;
    for (i = 0; i < N; i++){
        ekle = D[i];
        for (k = i - 1; k >= 0 && ekle <= D[k]; k--){
            D[k + 1] = D[k]; // bosalan dugumun bellek alani serbest birakiliyor
        }
        D[k + 1] = ekle; // koy-ekle modu
        //cout<<"Tur: "<<tur++<<endl;
        //yaz(D,10);
        //cout<<endl;
    }
}

int main()
{
    int dizi[10] ={4,20,1,15,8,6,60,21,3,9};

    cout<<"Siralanmamis dizi:"<<endl;
    yaz(dizi,10);

    arayaSokma(dizi,10);

    cout<<"Siralanmis dizi:"<<endl;
    yaz(dizi,10);

    return 0;
}
