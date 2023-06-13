#include <iostream>

using namespace std;

class islem
{
    int x,y;
    public:
        islem(){}
        islem(int a, int b)
        {
            x=a;
            y=b;
        }
        islem operator+(islem n)
        {
            islem bos;
            bos.x=n.x+x;
            bos.y=n.y+y;
            return bos;
        }
        islem operator-(islem n)
        {
            islem bos;
            bos.x=x-n.x;
            bos.y=y-n.y;
            return bos;
        }
        islem operator*(islem n)
        {
            islem bos;
            bos.x=x*n.x;
            bos.y=y*n.y;
            return bos;
        }
        void yaz()
        {
            cout<<"x: "<<x<<" y:"<<y<<endl;
        }

};

int main()
{
    islem a(1,2),b(3,5);

    islem sonuc = a+b;
    sonuc.yaz();

    sonuc = a-b;
    sonuc.yaz();

    sonuc = a*b;
    sonuc.yaz();

    return 0;
}
