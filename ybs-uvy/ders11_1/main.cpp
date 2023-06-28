#include <iostream>

using namespace std;

struct dugum
{
    int sayi;
    dugum *sonraki;
};

void yaz(dugum* ara)
{
    int seviye=0;
    while(ara!=NULL)
    {
        cout<<seviye++<<":"<<ara->sayi<<endl;
        ara=ara->sonraki;
    }

}

dugum* sil(dugum* ara, int deger)
{
    dugum *onceki=ara, *ilk=ara;
    while(ara!=NULL)
    {
        if(ara->sayi==deger)
        {
            onceki->sonraki=ara->sonraki;
            if(ilk==ara)
            {
                ilk=ara->sonraki;
            }
            free(ara);
            break;
        }
        if(onceki!=ara)
        {
            onceki=ara;
        }
        ara=ara->sonraki;
    }
    return ilk;
}

int main()
{
    dugum *ilk=NULL, *p, *son;
    for(int i=0;i<5;i++)
    {
        p=(dugum*)malloc(sizeof(dugum));
        if(p!=NULL)
        {
            p->sonraki=NULL;
            p->sayi=i;

            if(ilk==NULL)
            {
                ilk=p;
            }
            else
            {
                son->sonraki=p;
            }
            son=p;
        }
        else
        {
            cout<<"Dugum olusturulamadi!"<<endl;
        }
    }

    yaz(ilk);
    ilk=sil(ilk,0);
    yaz(ilk);

    return 0;
}
