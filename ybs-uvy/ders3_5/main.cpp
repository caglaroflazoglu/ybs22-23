#include <iostream>

using namespace std;

int main()
{
    int limit=100000;

    int x[100];

    for(int i=0;i<limit;i++)
    {
        for(int j=0;j<limit;j++)
        {
            cout<<i<<"-"<<j<<endl;
        }
    }

    return 0;
}
