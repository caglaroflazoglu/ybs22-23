#include <iostream>

using namespace std;

void topla(int sayi1, int sayi2)
{

    int toplam=sayi1+sayi2;

    cout<<sayi1<<"+"<<sayi2<<"="<<toplam<<endl;

}

int main()
{
    topla(1,2);
    topla(5,20);
    topla(50,13);


    return 0;
}
