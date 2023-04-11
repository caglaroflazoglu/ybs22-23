#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    float x,y,z;

    a=3;
    b=2;

    c=a/b;
    x=a/b;
    cout<<"c=a/b --> c:"<< c <<endl;
    cout<<"x=a/b --> x:"<< x <<endl;

    y=2;
    x=a/y;
    cout<<"x=a/y --> x:"<< x <<endl;

    x=a/(b*1.0);
    cout<<"x=a/(b*1.0) --> x:"<< x <<endl;

    return 0;
}
