#include <iostream>
#define CLS "\033[2J\033[H"

class automovil{

    std::string marca;
    std::string modelo;
    std::string color;
    std::string estado;
    std::string velocidad;
    std::string gasolina;

public:
    automovil(std::string mar, std::string mo, std::string col, std::
               string onoff, std::string vel, std::string gas){
        marca=mar;
        modelo=mo;
        color=col;
        estado=onoff;
        velocidad=vel;
        gasolina =gas;
    }
    void encender() {std::cout<<"coche "<< marca <<"/"<<modelo<< " encendido"<<std::endl;}
    void acelerar();
    void frenar();
};
void limpiarpantalla(){
    std::cout<<CLS;
}
int main()
{
    automovil micoche("nissan","versa","rojo","on","100km/h","80%");
    micoche.encender();
    return 0;
}
