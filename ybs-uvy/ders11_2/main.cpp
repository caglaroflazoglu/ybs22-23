#include <iostream>

using namespace std;

struct dugum
{
    int sayi;
    dugum *sonraki,*onceki;
};

void yaz(dugum* ara, char yon)
{
    while(ara!=NULL)
    {
        cout<<ara->sayi<<endl;
        if(yon=='i')
            ara=ara->sonraki;
        else
            ara=ara->onceki;
    }
}

dugum* yenidugum(int sayi, dugum* onceki, dugum* sonraki)
{
    dugum*p = (dugum*)malloc(sizeof(dugum));
    p->onceki=onceki;
    p->sonraki=sonraki;
    p->sayi=sayi;
    return p;
}

int main()
{
    dugum *ilk=NULL, *onceki, *p;

    for(int i=0;i<5;i++)
    {
        if(ilk==NULL)
        {
            onceki=NULL;
            ilk = yenidugum(i*i,onceki,NULL);
            if(ilk==NULL)
            {
                cout<<"Nesne olusturulamadi!"<<endl;
                break;
            }
            onceki=ilk;
        }
        else
        {
            p = yenidugum(i*i,onceki,NULL);
            if(p==NULL)
            {
                cout<<"Nesne olusturulamadi!"<<endl;
                break;
            }
            onceki->sonraki=p;
            onceki=p;
        }
    }
    cout<<"İleriye: "<<endl;
    yaz(ilk,'i');
    cout<<endl<<"Geriye: "<<endl;
    yaz(onceki,'g');

    return 0;
}
