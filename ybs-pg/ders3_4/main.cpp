#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s1[] = "merhaba dunya";
    char s2[100];

    cout<<"s1: "<<s1<<endl;

    strcpy(s2,s1);

    cout<<"s2: "<<s2<<endl;


    return 0;
}
