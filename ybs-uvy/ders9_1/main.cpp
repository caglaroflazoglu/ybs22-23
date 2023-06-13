#include <iostream>

using namespace std;

void islem(int x)
{
    //cout<<x<<"\t";
    if(x>0){
        islem(x-1);
    }
    cout<<x<<"\t";
}

int main()
{
    islem(5);
    return 0;
}
