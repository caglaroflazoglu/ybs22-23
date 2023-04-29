#include <iostream>

using namespace std;

class parametrelikurucu
{
    int sayi1,sayi2; // private
    public:
        parametrelikurucu(int x,int y)
        {
            sayi1=x;
            sayi2=y;
        }
        void yazdir()
        {
            cout<<"sayi1: "<<sayi1<<" sayi2: "<<sayi2<<endl;
        }
};

int main()
{
    parametrelikurucu p1(1,2), p2(10,20);
    //p1.sayi1=20; // private oldugu icin erisilemez!
    p1.yazdir();
    p2.yazdir();
    return 0;
}
