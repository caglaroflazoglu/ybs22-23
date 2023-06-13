#include <iostream>

using namespace std;

class dizi
{
    int x,y;
    public:
        dizi(int n, int m)
        {
            x = n;
            y = m;
        }
        void yaz()
        {
            cout<<"x: "<<x<<" y: "<<y;
        }
};

int main()
{
    dizi elemanlar[5]={{1,2},{2,3},{3,4},{4,5},{5,6}};

    for(int i=0;i<5;i++)
    {
        cout<<(i+1)<<". nesne icin ";
        elemanlar[i].yaz();
        cout<<endl;
    }

    return 0;
}
