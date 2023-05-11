#include <iostream>

using namespace std;

int main()
{
    int x=10;

    if(x>5)
    {
        cout<<"x, 5'ten buyuktur"<<endl;
    }

    if(x>3)
    {
        cout<<"x, 3'ten buyuktur"<<endl;
    }

    cout<<"---"<<endl;

    if(x>5)
    {
        cout<<"*x, 5'ten buyuktur"<<endl;
    } else if(x>3)
    {
        cout<<"*x, 3'ten buyuktur"<<endl;
    }

    return 0;
}
