#include <iostream>

using namespace std;

int main()
{
    int ay,gun,yil;

    cout<<"Gun:";
    cin>>gun;

    cout<<"Ay:";
    cin>>ay;

    cout<<"Yil:";
    cin>>yil;


    //28: 2
    //30: 4,6,9,11
    //31: 1,3,5,7,8,10,12

    int maksgun=31;

    if(ay==1 || ay==3 || ay==5 || ay==7 || ay==8 || ay==10 || ay==12)
    {
        // gun=31
    } else if(ay==4 || ay==6 || ay==9 || ay==11)
    {
        maksgun=30;
    }else if(ay==2)
    {
        maksgun=28;

        if(yil%4==0)
        {
            if(yil%100==0) //1800, 1900 icin
            {
                if(yil%400==0) //1900 icin artik degil
                {
                    maksgun++; // 1800 artik yil
                }
            }
            else
            {
                maksgun++; // 1904 artik yil
            }
        }

    }else{
        cout<<"Ay bilgisi gecersiz!"<<endl;
        maksgun=0;
    }


    if(maksgun>0)
    {
        if(gun>0 && gun<=maksgun)
        {
            cout<<"Tarih gecerli:"<<gun<<"/"<<ay<<"/"<<yil<<endl;
        }
        else
        {
            cout<<"Girilen tarih gecersiz!";
        }
    }

    return 0;
}
