#include <iostream>

using namespace std;

int main()
{
    int x=10;

    cout<<"x: "<<x<<" &x: "<<&x<<endl;


    int* px=&x; // xin adres bilgisini px e alır

    cout<<"px:"<<px<<" &px:"<<&px<<endl;

    cout<<"px:"<<px<<" *px=>x:"<<*px<<endl;

    cout<<"x:"<<x<<" *px:"<<*px<<endl;

    *px=20;

    cout<<"x:"<<x<<" *px:"<<*px<<endl;


    return 0;
}
