#include <iostream>

using namespace std;

int main()
{
    int a,b;

    a=10;
    b=a++; // a++ -> a+=1 --> a=a+1;
    cout<<"a:"<<a<<" b:"<<b<<endl;

    cout<<endl<<endl;

    a=10;
    b=++a; // a++ -> a+=1 --> a=a+1;
    cout<<"a:"<<a<<" b:"<<b<<endl;

    return 0;
}
