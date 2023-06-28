#include <iostream>

using namespace std;

class Arac{
    public:
        void motorcalistir(){
            cout << "Arac motoru calisti"<< endl;
        }
        void motordurdur(){
            cout << "Arac motoru durdu"<< endl;
        }
};

class otomobil: public Arac{
    public:
        void gaz(){
            cout << "Otomobil: Gaza basildi"<< endl;
        }
        void fren(){
            cout << "Otomobil: Frene basildi"<< endl;
        }
};

int main()
{
    otomobil o;

    o.motorcalistir();
    o.gaz();
    o.fren();
    o.motordurdur();

    return 0;
}
