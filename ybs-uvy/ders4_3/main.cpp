#include <iostream>

using namespace std;

typedef struct topluluk{
    int bilgi;
    char mesaj[100];
    struct topluluk *bag;
}BLISTE;

int main()
{
    BLISTE *ilk=NULL, *son=NULL;

    BLISTE x1,x2;
    x1.mesaj[0]='a';
    x1.bilgi=20;
    x1.bag=NULL;

    x2.mesaj[0]='b';
    x2.bilgi=30;
    x2.bag=NULL;

    cout<<"&x1: "<<&x1<<endl;
    cout<<"&x2: "<<&x2<<endl;

    *ilk = x1;
    x1.bag = &x2;
    *son = x2;

    return 0;
}
