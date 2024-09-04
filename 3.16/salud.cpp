#include <iostream>
#include <string>
#include "salud.h"
using namespace std;

int main(){

    string nombre{""};
    string apellido{""};
    string sexo{""};
    int dia{0};
    int mes{0};
    int año{0};
    double altura{0}; //pulgadas
    double peso{0}; //libras
    cout<<"Porfavor ingrese su primer nombre: ";
    cin>>nombre;
    cout<<"porfavor ingrese su primer apellido: ";
    cin>>apellido;
    cout<<"porfavor ingrese su sexo: ";
    cin>>sexo;
    cout<<"ingrese su dia de nacimiento: ";
    cin>>dia;
    cout<<"ingrese su mes de nacimiento: ";
    cin>>mes;
    cout<<"ingrese su año de nacimiento: ";
    cin>>año;
    cout<<"ingrese su altura en pulgadas";
    cin>>altura;
    cout<<"ingrese su peso en libras";
    cin>>peso;

    Perfil_salud perfil1{nombre,apellido,sexo,dia,mes,año,altura,peso};

    cout<<endl;
    cout<<"su nombre completo es: "<<perfil1.get_Nombre()<<" "<<perfil1.get_Apellido()<<endl;
    cout<<"su sexo es: "<<perfil1.get_Sexo()<<endl;
    cout<<"su fecha de nacimiento es: "<<perfil1.get_Dia()<<"/"<<perfil1.get_Mes()<<"/"<<perfil1.get_Año()<<endl;
    cout<<"su edad es: "<<perfil1.calcular_Edad()<<endl;
    cout<<"su indice de masa corporal es: "<<perfil1.dar_Imc()<<endl;
    cout<<"su frecuencia maxima es: "<<perfil1.frecuencia_Maxima(perfil1)<<endl;
    perfil1.frecuencia_Objetivo(perfil1);
    cout<<endl;
    cout<<"BMI VALUES"<<endl;
    cout<<"Underweight: less than 18.5"<<endl;
    cout<<"Normal: between 18.5 and 24.9"<<endl;
    cout<<"Overweight: between 25 and 29.9"<<endl;
    cout<<"Obese: 30 or greater"<<endl;


}