#include <iostream>

using namespace std;

void degistir(char *x, char *y)
{
    char d = *x;   // a b --> b a
    *x = *y;
    *y = d;
}

void permutasyon(char A[], int ilk, int son)
{
    int i;
    if(ilk == son)
    {
        for(i=0;i<=son;i++)
        {
            cout<<A[i];
        }
        cout<<endl;
    }
    else{
        for(i=ilk;i<=son;i++)
        {
            degistir(&A[ilk],&A[i]); // X.. Y.. Z.. --> X** --> XYZ, XZY
            permutasyon(A, (ilk+1),son);
            degistir(&A[ilk],&A[i]);
        }
    }
}

int main()
{
    char metin[] = {'x', 'y', 'z'};
    permutasyon(metin, 0, sizeof(metin)-1);
    return 0;
}
