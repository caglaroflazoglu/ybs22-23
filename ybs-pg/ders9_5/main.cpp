#include <iostream>

using namespace std;

class sinif
{
    int x;
    public:
        sinif(int d)
        {
            x=d;
        }
        void yaz()
        {
            cout<<"x: "<<x<<endl;
        }
};

void islem(sinif x)
{
    x.yaz();
}


int main()
{

    sinif a(10);
    islem(a);
    return 0;
}
