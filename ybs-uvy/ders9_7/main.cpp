#include <iostream>

using namespace std;

float catalan(int n)
{
    if(n==0)
    {
        return 1;
    }
    return (4*n+2)*catalan(n-1)/(1.0*(n+2));
}


int main()
{
    cout<<catalan(3)<<endl;
    return 0;
}
