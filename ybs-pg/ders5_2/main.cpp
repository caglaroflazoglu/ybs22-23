#include <iostream>

using namespace std;

int main()
{
    double* y;
    y = new double;
    cout<<"y: "<<y<<endl;

    y = new double;
    cout<<"y: "<<y<<endl;

    /*for(;;)
    {
        y = new double;
        cout<<"y: "<<y<<endl;
        //delete y;
    }*/
    return 0;
}
