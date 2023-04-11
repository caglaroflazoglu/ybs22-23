#include <iostream>

using namespace std;

int main()
{
    int sayi;

    cout<<"Sayi girin: ";
    cin>>sayi;

    if(sayi>5)
    {
        cout<<"Girilen sayi 5'ten buyuk"<<endl;
    }

    if(sayi<5)
    {
        cout<<"Girilen sayi 5'ten kucuk"<<endl;
    }

    if(sayi==5)
    {
        cout<<"Girilen sayi 5'ten esit"<<endl;
    }

    return 0;
}
