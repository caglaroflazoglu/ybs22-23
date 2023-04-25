#include <iostream>

using namespace std;

int main()
{
    int x;

    cout<<"x: "<<x<<endl;

    x=10;

    cout<<"x: "<<x<<endl;


    int y[]={1,2,3,4,5,6,7,8,9};

    int z[9];
    z[0]=1;
    z[1]=2;
    z[2]=3;
    z[3]=4;
    z[4]=5;
    z[5]=6;
    z[6]=7;
    z[7]=8;
    z[8]=9;

    for(int i=0;i<9;i++)
    {
        cout<<"y["<<i<<"]="<<y[i]<<" z["<<i<<"]="<<z[i]<<endl;
    }


    return 0;
}
