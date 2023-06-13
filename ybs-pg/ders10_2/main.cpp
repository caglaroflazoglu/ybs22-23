#include <iostream>

using namespace std;

class dizi
{
    int x;
    public:
        dizi(int n)
        {
            x = n;
        }
        int oku()
        {
            return x;
        }
};

int main()
{
    dizi elemanlar[5]={1,2,3,4,5};

    for(int i=0;i<5;i++)
    {
        cout<<(i+1)<<". eleman: "<<elemanlar[i].oku()<<endl;
    }

    return 0;
}
