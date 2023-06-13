#include <iostream>

using namespace std;

int main()
{
    int* p;
    if(true)
    {
        int x=10;
        p=&x;
        cout<<"x: "<<x<<" &x:"<<&x<<endl;
    }

    *p=50;

    int a;
    int b;
    int c;

    cout<<"a: "<<a<<" &a:"<<&a<<endl;
    cout<<"b: "<<b<<" &b:"<<&b<<endl;
    cout<<"c: "<<c<<" &c:"<<&c<<endl;





    return 0;
}
