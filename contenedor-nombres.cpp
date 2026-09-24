/*
 * Autor: Yania Zoí Sánchez Rodríguez
 * Fecha: 14/09/26
 * Ejercicio : contenedor de datos vectores
 */

 #include <iostream>
 #include <vector>
 #include <string>
 #include <fstream>
 #include <ctime>

 using namespace std;

class persona{
private:
    string nombre;
    long long numero;
    string curp;
    time_t fecha;

public:
    //delvcarar el conatructor
    persona(string pnombre="n", long long pnumero= 0, string pcurp="n", time_t pfecha= 0){
        nombre = pnombre;
        numero = pnumero;
        curp = pcurp;
        fecha=pfecha;
    }
    //getter
    string getnombre() const {return nombre;}

    //setter
    void setnombre(string pnombre){nombre = pnombre;}
};

 int main(){
    int opc;
    vector<persona> personas;
    string pnombre;
    ifstream minuevoarchivo("nombres.txt");
    if (!minuevoarchivo.is_open()) {
        cout << "No se pudo abrir el archivo." << endl;
        ofstream minuevoarchivo("nombres.txt");
        minuevoarchivo.close();
    } else{
        while(getline(minuevoarchivo, pnombre)){
            personas.push_back(pnombre);
        }
        minuevoarchivo.close();
    }
    do
    {
        cout<< "======= MENU COMPANEROS ======="<<endl;
        cout<< "1. agregar nombre"<<endl;
        cout<< "2. mostrar lista"<<endl;
        cout<< "3. salir"<<endl;
        cin>> opc;
        switch(opc){
            case 1:{
                cout<< "ingrese nombre del companero: "<<endl;
                getline(cin >> ws, pnombre);
                personas.push_back(pnombre);
                cout<< "Companiero guardado con exito!"<<endl;
                break;
            }

            case 2:{
                cout<< "==== LISTA DE COMPANEROS ===="<<endl;
                for (int i=0; i<personas.size();i++){
                    cout << i+1 <<". "<< personas[i].getnombre()<< endl;
                }

                break;
            }

            case 3:{
                cout<< "BYE BYEEEE..."<<endl;
                ofstream minuevoarchivo("nombres.txt");
                for (auto n : personas) {
                    minuevoarchivo << n.getnombre() << endl;
                }
                minuevoarchivo.close();

                break;
            }

            default:
                cout<< "opcion no valida :p "<<endl;
        }
    } while (opc != 3);

 return 0;
 }
