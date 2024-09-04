#include <iostream>
#include <string>
#include "factura.h"
using namespace std;

int main(){

    Factura factura1{1535746,"espejo trasero",2,25};
    
    factura1.set_Descuento(0.20);

    factura1.set_Igv(0.18);

    cout<<"el codigo es "<<factura1.get_Npieza()<<endl;
    cout<<"nombre del producto: "<<factura1.get_Descripcion()<<endl;
    cout<<"las unidades compradas son: "<<factura1.get_Cantidad()<<endl;
    cout<<"el precio por unidad es de: "<<factura1.get_Precio()<<endl;
    cout<<"el igv aplicable es de: "<<factura1.get_Igv()<<endl;
    cout<<"el descuemto aplicable es de: "<<factura1.get_Descuento()<<endl;

    cout<<"El total es de "<<factura1.dar_Factura()<<endl;


}