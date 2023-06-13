#include <iostream>

using namespace std;

class dizi
{
    int x;
    public:
        void yukle(int n)
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
    dizi elemanlar[5];
    int deger;
    for(int i=0;i<5;i++)
    {
        cout<<(i+1)<<". eleman: ";
        cin>>deger;
        elemanlar[i].yukle(deger);
    }

    for(int i=0;i<5;i++)
    {
        cout<<(i+1)<<". eleman: " << elemanlar[i].oku()<<endl;
    }

    return 0;
}
