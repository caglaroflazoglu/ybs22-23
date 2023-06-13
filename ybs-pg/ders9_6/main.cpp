#include <iostream>

using namespace std;

class sinif
{
    int i; // private
    public:
        void atama(int d)
        {
            i=d;
        }
        void yaz()
        {
            cout<<"i: "<<i<<endl;
        }

        friend void islem(sinif);
};

void yazdir(sinif n)
{
    cout<<"yazdir fonksiyonu"<<endl;
    n.yaz();
}

void islem(sinif n)
{
    cout<<"islem fonksiyonu"<<endl;
    n.i=50; //private
    n.yaz();

}

int main()
{
    sinif x;
    x.atama(10);
    //x.yaz();
    yazdir(x);
    islem(x);
    return 0;
}
