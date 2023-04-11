#include <iostream>

using namespace std;

int main()
{
    int sayi;

    cout<<"Sayi girin:";
    cin>>sayi;


    cout<<"Girilen sayi: "<<sayi<<endl;


    if(sayi>10)
    {
        cout<<"Girmis oldugunuz sayi 10'dan buyuk"<<endl;
    }
    else
    {
        cout<<"Girmis oldugunuz sayi 10'dan kucuk"<<endl;
    }

    if(sayi>5)
    {
        cout<<"Girmis oldugunuz sayi 5'ten buyuk"<<endl;
    }

    cout<<"Girmis oldugunuz sayi: "<<sayi<<endl;


    return 0;
}
