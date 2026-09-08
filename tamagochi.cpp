#include <iostream>

using namespace std;

class tamagochi{
    string nombre;
    int hambre;
    bool despierto;
    int nivelsalud;

    public:
    tamagochi(){
        nombre="sinnombre";
        hambre=0;
        despierto=true;
        cout<<"tamagochi recien nacido"<<endl;
    }

    tamagochi(string n){
        nombre = n;
        cout<<"tamagochi bautizado"<<endl;
    }
};

int main()
{
    tamagochi * ptrT, *ptrotro;
    ptrT = new tamagochi;
    ptrotro = new tamagochi("zuria");

    return 0;
}
