#include <iostream>

using namespace std;

int hesapla(int N){
    if(N<=1){
        return 1;
    }
    return (N*hesapla(N-1));//5*(4*(3*(2*(1))))
}
//5*4*3*2*1
int main(){
    cout<<"5!:"<<hesapla(5)<<endl;
    return 0;
}
