#include <iostream>

using namespace std;

int main()
{
    int l1, l2, l3;

    while (true){
        cout << "introduzca el lado 1 del triangulo: " << endl;
        cin >> l1;
        if (cin.fail()){
            cout<<"solo se aceptan numeros"<<endl;
            cin.clear();
            cin.ignore();
        } else{
        break;
        }
    }
    cout << "introduzca el lado 2 del triangulo: " << endl;
    cin >> l2;

    cout << "introduzca el lado 3 del triangulo: " << endl;
    cin >> l3;
    cout << "su perimetro es: " << l1 + l2 + l3 << endl;
    return 0;
}
