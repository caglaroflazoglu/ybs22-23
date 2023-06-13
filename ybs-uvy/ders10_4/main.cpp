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

void secmelisirala(int D[], int N){
    int i, index, j, enkucuk;
    for (i = 0; i < (N - 1); i++){
        /* dizinin başından başlanıyor */
        enkucuk = D[N - 1]; /* son eleman en küçük kabul ediliyor */
        index = N - 1;
        for (j = i; j < (N - 1); j++){
            /* daha küçüğü var mı diye aranıyor */
            if (D[j] < enkucuk){
                enkucuk = D[j];
                index = j;
            }
        }
        D[index] = D[i]; /* daha küçüğü varsa yer değiştiriliyor */
        D[i] = enkucuk;
    }
}


int main()
{
    int dizi[10] ={4,20,1,15,8,6,60,21,3,9};

    cout<<"Siralanmamis dizi:"<<endl;
    yaz(dizi,10);

    secmelisirala(dizi,10);

    cout<<"Siralanmis dizi:"<<endl;
    yaz(dizi,10);

    return 0;
}
