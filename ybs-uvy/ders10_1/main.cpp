#include <iostream>

using namespace std;

int bul(int A[], int boyut, int aranan)
{

    for(int i=0; i<boyut; i++)
    {
        if(aranan==A[i])
        {
            return i;
        }
    }
    return -1; // bulunamaz ise
}


int main()
{
    int dizi[10] ={4,20,1,15,8,6,60,21,3,9};
    int aranacak;
    cout<<"Aranacak: ";
    cin>>aranacak;
    int indis = bul(dizi,10,aranacak);
    if(indis>0)
    {
        cout<<"Aranan deger "<<indis<<" indisinde yer almaktadir"<<endl;
    }else
    {
        cout<<"Aranan deger dizide bulunamadi!"<<endl; // -1 ise bulunamadi
    }
    return 0;
}
