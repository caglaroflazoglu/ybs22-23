#include <iostream>

using namespace std;

int main()
{
    int sayi;

    cout<<"Sayi girin:";
    cin>>sayi;

    int i;

    for(i=0;i<=sayi;i++) // i++ -> i=i+1
    {
        //cout<<i<<endl;

        if(i%2==0)
        {
            cout<<i<<" sayisi cifttir"<<endl;
        }
        else
        {
            cout<<i<<" sayisi tektir"<<endl;
        }
    }

    cout<<"Dongu bitti"<<endl;

    return 0;
}
