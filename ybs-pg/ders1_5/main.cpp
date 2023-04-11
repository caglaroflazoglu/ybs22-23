#include <iostream>

using namespace std;

int main()
{
    int x,y;

    cout<<"x:";
    cin>>x;

    cout<<"y:";
    cin>>y;

    if(x>y){
        cout<<x<<" sayisi "<< y <<" sayisindan buyuktur"<<endl;
    }
    else{
        cout<<x<<" sayisi "<< y <<" sayisina esit veya kucuktur"<<endl;
    }

    if(x%2==0 && y%3==0)
    {
        cout<<"x sayisi cift ve y sayisi 3'un katidir"<<endl;
    }
    else
    {
        cout<<"x%2="<<(x%2)<<", y%3="<<(y%3)<<endl;
    }

    if(x%2==0 && (y%4==0 || y%5==0))
    {
        cout<<"x sayisi cift ve y sayisi 4 veya 5'in katidir"<<endl;
    }

    return 0;
}
