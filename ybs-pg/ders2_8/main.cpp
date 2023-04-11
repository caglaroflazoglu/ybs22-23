#include <iostream>

using namespace std;

int main()
{
    int sayi;

    do{
        cout<<"Sayi:";
        cin>>sayi;
    }while(sayi%2==0);

    cout<<"Dongu bitti"<<endl;

    return 0;
}
