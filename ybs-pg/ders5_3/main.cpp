#include <iostream>

using namespace std;

void dizi(int A[])
{
    cout<<"A[4]: "<<A[4]<<endl;
    A[4]=20;
    cout<<"yeni A[4]: "<<A[4]<<endl;
}

void sayi(int B) //B=6
{
    cout<<"B: "<<B<<endl;
    B=50;
    cout<<"yeni B: "<<B<<endl;

}

void sayi2(int* C)
{
    cout<<"*C: "<<*C<<endl;
    *C=70;
    cout<<"yeni *C: "<<*C<<endl;

}


int main()
{
    int y = 6;
    cout<<"y: "<<y<<endl;
    sayi(y); // B=6
    cout<<"yeni y: "<<y<<endl;
    cout<<endl<<endl;

    int x[]={1,2,3,4,5,6,7,8,9};
    cout<<"x[4]: "<<x[4]<<endl;
    dizi(x); // A = x ama adres olarak!
    cout<<"yeni x[4]: "<<x[4]<<endl;
    cout<<endl<<endl;

    int z = 7;
    cout<<"z: "<<z<<endl;
    sayi2(&z); // &z ile z nin adresini gonderdik
    cout<<"yeni z: "<<z<<endl;



    return 0;
}
