#include <iostream>

using namespace std;

int main()
{
    int a,b;

    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;

    if(a>5 && b<4)
    {
        cout<<"a sayisi 5 ten buyuk ve b sayisi 4'ten kucuk"<<endl;
    }

    if(a>5 || b<4)
    {
        cout<<"a sayisi 5 ten buyuk veya b sayisi 4'ten kucuk"<<endl;
    }

    return 0;
}
