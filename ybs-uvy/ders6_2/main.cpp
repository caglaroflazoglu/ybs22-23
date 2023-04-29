#include <iostream>

using namespace std;

int main()
{
    float para=1000;
    int ay=0;

    while(para<5000)
    {
        para+=para*0.18;
        ay++;
    }

    cout<<ay<<" sonra paraniz "<<para<<" TL olur"<<endl;



    return 0;
}
