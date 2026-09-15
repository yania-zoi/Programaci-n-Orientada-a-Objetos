/*
 * Autor: Yania Zoí Sánchez Rodríguez
 * Fecha: 14/09/26
 * Ejercicio : contenedor de datos vectores
 */

 #include <iostream>
 #include <vector>
 #include <string>

 using namespace std;
//vector<string> compas;
 int main(){
    int opc;
    vector<string> compas;
    do
    {
        cout<< "======= MENU COMPANEROS ======="<<endl;
        cout<< "1. agregar nombre"<<endl;
        cout<< "2. mostrar lista"<<endl;
        cout<< "3. salir"<<endl;
        cin>> opc;
        switch(opc){
            case 1:{
                string nombre;
                cout<< "ingrese nombre del companero: "<<endl;
                cin>> nombre;
                compas.push_back(nombre);
                cout<< "Companiero guardado con éxito!"<<endl;
                break;
            }

            case 2:{
                cout<< "==== LISTA DE COMPANEROS ===="<<endl;
                for (int i=0; i<compas.size();i++){
                    cout<< i+1 <<". "<< compas[i]<<endl;
                }
                
                break;
            }

            case 3:{
                cout<< "BYE BYEEEE..."<<endl;
                break;
            }

            default:
                cout<< "opcion no valida :p "<<endl;
        }
    } while (opc != 3);
    
 return 0;
 }
