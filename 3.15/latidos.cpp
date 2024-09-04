#include <iostream>
#include <string>
using namespace std;
#include "latidos.h"

int main(){
    string nombre{""};
    string apellido{""};
    int dia{0};
    int mes{0};
    int año{0};
    cout<<"Porfavor ingrese su primer nombre: ";
    cin>>nombre;
    cout<<"porfavor ingrese su primer apellido: ";
    cin>>apellido;
    cout<<"ingrese su dia de nacimiento: ";
    cin>>dia;
    cout<<"ingrese su mes de nacimiento: ";
    cin>>mes;
    cout<<"ingrese su año de nacimiento: ";
    cin>>año;
    Corazon persona1{nombre,apellido,dia,mes,año};

    cout<<endl;
    cout<<"su nombre completo es: "<<persona1.get_Nombre()<<" "<<persona1.get_Apellido()<<endl;
    cout<<"su fecha de nacimiento es: "<<persona1.get_Dia()<<"/"<<persona1.get_Mes()<<"/"<<persona1.get_Año()<<endl;
    cout<<"su edad es: "<<persona1.calcular_Edad()<<endl;
    cout<<"su frecuencia maxima es: "<<persona1.frecuencia_Maxima(persona1)<<endl;
    persona1.frecuencia_Objetivo(persona1);

}