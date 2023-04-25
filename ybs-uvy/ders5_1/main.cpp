#include <iostream>
#include <cstring>

using namespace std;

typedef struct topluluk{
    int bilgi;
    char mesaj[100];
    struct topluluk *bag;
}BLISTE;

int main()
{
    BLISTE *ilk=NULL, *son=NULL, *gecici;

    son = new topluluk;
    son->bilgi=30;
    strcpy(son->mesaj,"3. seviye");
    son->bag=NULL;

    ilk = new topluluk;
    ilk->bilgi=10;
    strcpy(ilk->mesaj,"1. seviye");

    gecici = new topluluk;
    gecici->bilgi=50;
    strcpy(gecici->mesaj,"ara seviye");

    ilk->bag = gecici;
    gecici->bag = new topluluk; // 2. seviyenin adres bilgisi

    gecici->bag->bilgi=20;
    strcpy(gecici->bag->mesaj,"2. seviye");

    gecici->bag->bag=son;

    //ilk->bag=son; // ara ve 2. seviyeyi oradan kaldirdik

    int derinlik=0;

    topluluk* t;
    t=ilk;

    while(t!=NULL)
    {
        cout<<derinlik<<": bilgi: "<<t->bilgi<<" mesaj: "<<t->mesaj<<endl;
        t=t->bag;
        derinlik++;
    }

    return 0;
}
