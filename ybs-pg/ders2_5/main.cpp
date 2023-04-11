#include <iostream>

using namespace std;

int main()
{
     int sayi;

    cout<<"Sayi: ";
    cin>>sayi;


    switch(sayi)
    {
    case 1:
    case 3:
    case 5:
    case 7:
        cout<<"Sayi tek"<<endl;
        break;
    case 2:
    case 4:
    case 6:
    case 8:
        cout<<"Sayi cift"<<endl;
        break;

    default:
        cout<<"Gecerli bir sayi girisi yapmadiniz!"<<endl;

    }
    return 0;
}
