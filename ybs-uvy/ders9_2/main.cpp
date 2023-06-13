#include <iostream>

using namespace std;

void islem(int x)
{
    cout<<"islem("<<x<<") icindeyiz"<<endl;
    if(x>0){
        cout<<"islem("<<x-1<<") cagirdik"<<endl;
        islem(x-1);
        cout<<"islem("<<x-1<<") donduk"<<endl;
    }
    cout<<"islem("<<x<<") icin x: "<<x<<endl<<endl<<endl;
}

int main()
{
    cout<<"basladik"<<endl<<endl;
    islem(3);
    cout<<"bitirdik"<<endl;
    return 0;
}
