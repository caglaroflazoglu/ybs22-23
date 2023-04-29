#include <iostream>

using namespace std;


const float PI = 3.14159;
class Kure{
    public:
    float r;
    float hacim();
    float alan();
};

float Kure::hacim()
{
        return (r * r * r * 4 * PI / 3);
}

float Kure::alan()
{
        return (r * r * 4 * PI);
}


int main()
{
    Kure k1,k2;

    k1.r=10;
    k2.r=30;

    cout<<"k1.r: "<<k1.r<<" k1.alan: "<<k1.alan()<<" k1.hacim: "<<k1.hacim()<<endl;
    cout<<"k2.r: "<<k2.r<<" k2.alan: "<<k2.alan()<<" k2.hacim: "<<k2.hacim()<<endl;

    return 0;
}
