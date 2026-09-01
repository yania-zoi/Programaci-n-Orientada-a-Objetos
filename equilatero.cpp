#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int l, l2, a, h;

    while (true){
        cout << "introduzca el lado del triangulo: " << endl;
        cin >> l;
        if (cin.fail()){
            cout<<"solo se aceptan numeros"<<endl;
            cin.clear();
            cin.ignore();
        } else{
        break;
        }
    }
    a = (l*sqrt(pow(l/2,2)+pow(l,2)))/2;
    cout << "su area es: " << a << endl;
    return 0;
}
