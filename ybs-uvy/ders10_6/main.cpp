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

void birlestir(int *D, int sol, int k, int sag)
{
   int i,j, gecici[sag-sol+1], sayac=0;
   for(i=sol, j=k+1; i<=k && j<=sag ;)
   {
       if(D[i]<=D[j])
       {
            gecici[sayac]=D[i];
            i++;
       }
       else
       {
            gecici[sayac]=D[j];
            j++;
       }
       sayac++;
   }

   while(i<=k)
   {
        gecici[sayac]=D[i];
        i++;
        sayac++;
   }

   while(j<=sag)
   {
        gecici[sayac]=D[j];
        j++;
        sayac++;
   }

    for(sayac=0,i=sol;sayac<sag-sol+1;sayac++)
    {
        D[i++]=gecici[sayac];
    }

}



void birlesmeli(int *D, int sol, int sag)
{
    if(sol<sag)
    {
        int k = (sol+sag)/2;
        birlesmeli(D,sol,k);
        birlesmeli(D,k+1,sag);
        birlestir(D,sol,k,sag);
    }
}

int main()
{
    int dizi[10] ={4,20,1,15,8,6,60,21,3,9};
    cout<<"Siralanmamis dizi:"<<endl;
    yaz(dizi,10);
    birlesmeli(dizi,0,9);
    cout<<"Siralanmis dizi:"<<endl;
    yaz(dizi,10);
    return 0;
}
