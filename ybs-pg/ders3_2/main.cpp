#include <iostream>

using namespace std;

int main()
{
    char ch = 'C';

    // char 1 byte uzunlugundadir, sizeof(char)-->1

    cout<<"uzunluk: "<<sizeof(ch)/sizeof(char)<<endl;

    char kelime[] = {'C','A','G','L','A','R'};

    cout<<"uzunluk: "<<sizeof(kelime)/sizeof(char)<<endl;

    char kelime2[] = {"CAGLAR"}; // \0 ifadesi de bu ornek yer aldi

    cout<<"uzunluk: "<<sizeof(kelime2)/sizeof(char)<<endl;

    //0:C
    //1:A
    //2:G
    //3:L
    //4:A
    //5:R
    //6:\0

    return 0;
}
