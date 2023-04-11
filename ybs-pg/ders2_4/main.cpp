#include <iostream>

using namespace std;

int main()
{
    int ay;

    cout<<"Ay: ";
    cin>>ay;


    switch(ay)
    {
    case 1:
        cout<<"Ocak"<<endl;
        break;
    case 2:
        cout<<"Subat"<<endl;
        break;
    case 3:
        cout<<"Mart"<<endl;
        break;
    case 4:
        cout<<"Nisan"<<endl;
        break;
    case 5:
        cout<<"Mayis"<<endl;
        break;
    case 6:
        cout<<"Haziran"<<endl;
        break;
    case 7:
        cout<<"Temmuz"<<endl;
        break;
    case 8:
        cout<<"Agustos"<<endl;
        break;
    case 9:
        cout<<"Eylul"<<endl;
        break;
    case 10:
        cout<<"Ekim"<<endl;
        break;
    case 11:
        cout<<"Kasim"<<endl;
        break;
    case 12:
        cout<<"Aralik"<<endl;
        break;
    default:
        cout<<"Gecerli bir giris yapmadiniz (1-12)"<<endl;

    }

    return 0;
}
