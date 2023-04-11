#include <iostream>

using namespace std;

int main()
{
    int sayi;

    cout<<"Sayi girin:";
    cin>>sayi;

    int i;

    i=0;
    while(i<=sayi)
    {
        if(i%2==0)
        {
            cout<<i<<" sayisi cift"<<endl;
        }
        else
        {
            cout<<i<<" sayisi tek"<<endl;
        }

        i++; // i=i+1
    }


    return 0;
}
