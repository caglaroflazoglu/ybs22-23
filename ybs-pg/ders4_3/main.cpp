#include <iostream>

using namespace std;

int main()
{
    int x[]={1,2,3,4,5};

    int* p;

    cout<<"&x: "<<&x<<endl;
    cout<<"&x[0]: "<<&x[0]<<endl;
    cout<<"&x[1]: "<<&x[1]<<endl;
    cout<<"&x[2]: "<<&x[2]<<endl;
    cout<<"&x[3]: "<<&x[3]<<endl;
    cout<<"&x[4]: "<<&x[4]<<endl;

    p=x;

    cout<<"p: "<<p<<endl;
    cout<<"x[0]: "<<x[0]<<" *p: "<<*p<<endl;
    cout<<"x[1]: "<<x[1]<<" *(p+1): "<<*(p+1)<<endl;
    cout<<"x[4]: "<<x[4]<<" *(p+4): "<<*(p+4)<<endl;

    return 0;
}
