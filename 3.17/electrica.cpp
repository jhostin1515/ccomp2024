#include <iostream>
#include <string>
#include "electrica.h"
using namespace std;

int main(){

    ElectricBill usuario1{10000};

    cout<<"su pago inicial es: "<<usuario1.get_Pago()<<endl;
    cout<<"su pago de vat es: "<<usuario1.get_Vat()<<endl;
    cout<<"su pago de rea es de: "<<usuario1.get_Rea()<<endl;
    cout<<"su pago de ewura es de: "<<usuario1.get_Ewura()<<endl;
    cout<<"su pago de cargo fijo es de 5000"<<endl;
    cout<<"usted puede comprar: "<<usuario1.get_Units(usuario1)<<"kv"<<endl;

    return 0;

}