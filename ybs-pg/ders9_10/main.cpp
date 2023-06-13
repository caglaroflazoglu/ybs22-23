#include <iostream>

using namespace std;

class sayi
{
    int x;
    public:
        void ata(int z)
        {
            x=z;
        }
        int oku()
        {
            return x;
        }
};

int main()
{
    sayi sayilar[5];

    for(int i=0;i<5;i++)
    {
        sayilar[i].ata(i*i);
    }

    for(int i=0;i<5;i++)
    {
        cout<<"sayilar["<<i<<"] :"<<sayilar[i].oku()<<endl;
    }

    return 0;
}
