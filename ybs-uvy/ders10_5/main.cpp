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

void kabarcik(int D[], int N){
    int gecici, k, hareket,tur=1;
    for (hareket = 0; hareket < N - 1; hareket++){
        for (k = 0; k < N - 1 - hareket; k++){
            if (D[k] > D[k + 1]){
                /* komşular karşılaştırılıyor */
                gecici = D[k]; /* yer değiştirme kodu */
                D[k] = D[k + 1];
                D[k + 1] = gecici;
            }
        }
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
    kabarcik(dizi,10);
    cout<<"Siralanmis dizi:"<<endl;
    yaz(dizi,10);
    return 0;
}
