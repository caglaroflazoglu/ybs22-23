#include <iostream>

using namespace std;

int main()
{
    int dizi[4];
    dizi[0]=10;
    dizi[1]=20;
    dizi[2]=30;
    dizi[3]=40;

    int* p = dizi;

    cout<<"&dizi: "<<&dizi<<endl;
    cout<<"p: "<<p<<endl;
    cout<<"&dizi[0] "<<&dizi[0]<<endl;
    cout<<"&dizi[1] "<<&dizi[1]<<endl;
    cout<<"&dizi[2] "<<&dizi[2]<<endl;

    cout<<"---"<<endl;
    cout<<"p: "<<p<<endl;
    cout<<"(p+1): "<<p+1<<endl;
    cout<<"(p+2): "<<p+2<<endl;


    return 0;
}
