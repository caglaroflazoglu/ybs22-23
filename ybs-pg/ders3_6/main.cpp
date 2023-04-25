#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    char s1[100] = "merhaba"; // merhaba du
    char s2[100] = " dunya";

    cout<<"s1: "<<s1<<endl;

    strcat(s1,s2);

    cout<<"s1+s2: "<<s1<<endl;

    return 0;
}
