#include <iostream>

using namespace std;

struct AGAC2{
    int bilgi;
    struct AGAC2 *sol,*sag;
};

void yazEkrana(AGAC2* agacKok) {
    cout<<"bilgi: "<<agacKok->bilgi<<endl;
}

/* Listedeki tüm kayıtları listeleme */
void listele(AGAC2* agacKok) {
    if(agacKok!=NULL) {
        listele(agacKok->sol);
        yazEkrana(agacKok);
        listele(agacKok->sag);
    }
}

/* Ağaç üzerinde bir kayıt arama */
AGAC2* ara(AGAC2* agacKok, int aranan) {
    while(agacKok!=NULL && agacKok->bilgi!=aranan) {
        if(aranan <= agacKok->bilgi)
            agacKok=agacKok->sol;
        else
            agacKok=agacKok->sag;
        }
    return agacKok;
}

/* İkili ağaç üzerindeki düğüm sayısını sayar*/
int sayAgacDugum(AGAC2 *agacKok, int miktar)
{
    if(agacKok==NULL)
        return miktar;
    miktar++;
    miktar=sayAgacDugum(agacKok->sol, miktar);
    miktar=sayAgacDugum(agacKok->sag, miktar);
    return miktar;
}

int main()
{
    AGAC2 *kok=NULL, *p;

    kok = (AGAC2*) malloc(sizeof(AGAC2));
    //(*kok).bilgi=
    kok->bilgi=10;
    kok->sag=(AGAC2*) malloc(sizeof(AGAC2));
    kok->sol=(AGAC2*) malloc(sizeof(AGAC2));

    /*p=kok->sag;
    p->bilgi=12;
    p->sag=NULL;
    p->sol=NULL;*/

    kok->sag->bilgi=12;
        kok->sag->sag=(AGAC2*) malloc(sizeof(AGAC2));
        kok->sag->sag->bilgi=14;
        kok->sag->sag->sag=NULL;
        kok->sag->sag->sol=NULL;

        kok->sag->sol=(AGAC2*) malloc(sizeof(AGAC2));
        kok->sag->sol->bilgi=2;
        kok->sag->sol->sag=NULL;
        kok->sag->sol->sol=NULL;

    kok->sol->bilgi=8;
    kok->sol->sag=NULL;
    kok->sol->sol=NULL;

//    10
// 8      12
 //    2     14

    listele(kok);
    cout<<endl<<"Toplam dugum: "<<sayAgacDugum(kok,0)<<endl;

    AGAC2* px = ara(kok,12);

    if(px->sol!=NULL)
    {
        cout<<"ebeveynin sol cocuk dugum bilgisi: "<<px->sol->bilgi<<endl;
    }

    return 0;
}
