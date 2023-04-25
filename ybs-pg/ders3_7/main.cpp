#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    char s1[] = "abc"; //a->61 --> strcmp 61-41=(20) 16lik sayi sistemi --> 10luk sayi sistemine gore +32
    char s2[] = "Abc"; //A->41

    int sonuc = strcmp(s1,s2);

    cout<<"sonuc: "<<sonuc<<endl;

    return 0;
}
