#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int A,B,C;
    int delta;

    cout<<"A: ";
    cin>>A;
    cout<<"B: ";
    cin>>B;
    cout<<"C: ";
    cin>>C;

    delta = B*B-4*A*C;

    if(delta>0)
    {
        float kok1=(-B+sqrt(delta))/(2.0*A);
        float kok2=(-B-sqrt(delta))/(2.0*A);
        cout<<"delta= "<<delta<<" kok1: "<<kok1 <<" kok2: "<<kok2<<endl;

    }else if(delta==0)
    {
        //kokler birbirine esit cikar
        float kok=(-B)/(2.0*A);
        cout<<"delta=0 kokler esit, kok:"<<kok<<endl;

    }
    else
    {
        // delta<0
        cout<<"Kokler karmasiktir!"<<endl;
    }



    return 0;
}
