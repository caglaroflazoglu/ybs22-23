#include <iostream>

using namespace std;

int main()
{
    int x=30;
    bool y=true;
    double d=123;

    int* px=&x;
    bool* py=&y;
    double* pd=&d;


    cout<<"px: "<<px<<" py: "<<py<<" pd: "<<pd<<endl;

    //asagidaki komutlar degerde 1 birimlik artis yapar
    px++; // int oldugu icin 1 birimlik artisi +4'tur
    py+=1; // char oldugu icin 1 birimlik artisi +1'dir
    pd=pd+1; // double oldugu icin 1 birimlik artisi +8'dir

    cout<<"px+1: "<<px<<" py+1: "<<py<<" pd+1: "<<pd<<endl;



    return 0;
}
