#include <iostream>

using namespace std;

int main()
{
    int boyut;

    cout<<"Eleman sayisini girin:";
    cin>>boyut;

    cout<<endl<<endl;

    int sayilar[boyut];

    for(int i=0;i<boyut;i++)
    {
        cout<<(i+1)<<". sayi: ";
        cin>>sayilar[i];
    }

    int enkucuk=sayilar[0]; //10,1,5,8,9

    for(int i=1;i<boyut;i++)
    {
        if(enkucuk>sayilar[i])
        {
            enkucuk=sayilar[i];
        }
    }

    cout<<"Girilmis olan en kucuk sayi: "<<enkucuk<<endl;







    return 0;
}
