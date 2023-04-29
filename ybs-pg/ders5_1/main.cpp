#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    cout<<"&x: "<<&x<<endl;

    int* y = new int;
    *y=15;

    cout<<"&y: "<<&y<<endl; // y degiskeninin adresi (stack)
    cout<<"y: "<<y<<endl; // new int in adresi (heap), yani y nin icindeki adres


    int* z = &x; // z nin icerisinde x in adresi var.

    z+=1; // y nin adresine geldik (+4 byte)

    cout<<"z: "<<z<<endl;
    cout<<"**z: "<<**(int**)z<<endl; // ynin gosterdigi adres -> *z->y -->*y --> **z

    return 0;
}
