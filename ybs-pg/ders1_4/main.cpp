#include <iostream>

using namespace std;

int main()
{
    int x=10;
    int y;

    cout<<"x: "<<x<<endl;

    x++; // x=x+1; x+=1
    cout<<"x: "<<x<<endl;

    ++x; // x=x+1; x+=1
    cout<<"x: "<<x<<endl;


    cout<<endl;

    x=10;
    y=x++;
    cout<<"x: "<<x<<" y:"<<y<<endl;

    x=10;
    y=++x;
    cout<<"x: "<<x<<" y:"<<y<<endl;




    return 0;
}
