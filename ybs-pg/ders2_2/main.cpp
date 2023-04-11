#include <iostream>

using namespace std;

int main()
{
    int sayi;

    cout<<"Sayi girin: ";
    cin>>sayi;


    cout<<"Girilen sayi: "<<sayi<<endl;

    if(sayi>=10)
    {
        cout<<"Girin sayi 10'a esit veya buyuk"<<endl;
    }
    else if(sayi>=5)
    {
        cout<<"Girin sayi 5 ile 10 (haric) arasinda"<<endl;
    }
    else if(sayi>=0)
    {
        cout<<"Girin sayi 0 ile 5 (haric) arasinda"<<endl;
    }
    else
    {
        cout<<"Sayi negatif"<<endl;
    }


    return 0;
}
