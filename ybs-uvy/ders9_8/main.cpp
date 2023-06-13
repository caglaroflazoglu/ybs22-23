#include <iostream>

using namespace std;

unsigned int Ackermann(unsigned int x, unsigned int y)
{
    if(x==0){
       return 2*y;
    }
    if(y==0){
       return 0;
    }
    if(y==1){
       return 2;
    }
    return Ackermann(x-1,Ackermann(x,y-1));
}


int main()
{
    cout<<Ackermann(5,3);
    return 0;
}
