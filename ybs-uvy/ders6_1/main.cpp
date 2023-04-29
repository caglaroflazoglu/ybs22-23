#include <iostream>

using namespace std;


int main(){

    int n;
    cout<<"Sayi: ";
    cin>>n;

    int sonuc=1;
    for(int i=2;i<=n;i++)
    {
        sonuc*=i;
    }
    cout<<"n!=>"<<n<<"! :"<<sonuc<<endl;
    return 0;
}
