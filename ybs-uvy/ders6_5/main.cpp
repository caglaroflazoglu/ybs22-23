#include <iostream>

using namespace std;

int main()
{
    int x[3][2]={{1,2},{3,4},{5,6}};
    int y[3][2]={{8,7},{6,5},{4,3}};
    int sonuc[3][2];

    for(int satir=0;satir<3;satir++)
    {
        for(int sutun=0;sutun<2;sutun++)
        {
            sonuc[satir][sutun]=x[satir][sutun]+y[satir][sutun];
        }
    }

    for(int satir=0;satir<3;satir++)
    {
        for(int sutun=0;sutun<2;sutun++)
        {
            cout<<sonuc[satir][sutun]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
