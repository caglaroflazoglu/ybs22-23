#include <iostream>

using namespace std;

int main()
{
    string s1 = "123456";
    int s2 = 123456; // (123456).10 --> (0001E240).16 --> .10: onluk sayi sistemi, .16->16. lık sayi sistemi
    char s3[] ={'1','2','3','4','5','6'}; //1->0x31, 2->0x32, ...., 6->0x36

    cout<<s1<<" stringinin s1 boyutu:"<<sizeof(s1)<<endl;
    cout<<"int s2 boyutu:"<<sizeof(s2)<<endl;
    cout<<"char s3[] boyutu:"<<sizeof(s3)<<endl;

    char s4[] = "caglar";

    cout<<s4<<" stringinin s4 boyutu:"<<sizeof(s4)<<endl;


    string s5 = "1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890";

    cout<<s5<<" stringinin s5 boyutu:"<<sizeof(s5)<<" uzunlugu:"<<s5.length()<<" size:"<<s5.size()<<endl;


    return 0;
}


