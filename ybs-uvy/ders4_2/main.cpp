#include <iostream>

using namespace std;

int main()
{

    int y;
    int x[]={1,2,3,4,5};
    int z;



    cout<<"sizeof(x): "<<sizeof(x)<<endl;
    cout<<"sizeof(int): "<<sizeof(int)<<endl;
    cout<<"sizeof(x)/sizeof(int): "<<sizeof(x)/sizeof(int)<<endl;

    cout<<"&x: "<<&x<<endl;
    cout<<"&x[0]:"<<&x[0]<<endl;
    cout<<"&x[1]:"<<&x[1]<<endl;
    cout<<"&x[2]:"<<&x[2]<<endl;
    cout<<"&x[3]:"<<&x[3]<<endl;
    cout<<"&x[4]:"<<&x[4]<<endl;
    cout<<"&y:"<<&y<<endl;
    cout<<"&z:"<<&z<<endl;

    int* px;



    return 0;
}
