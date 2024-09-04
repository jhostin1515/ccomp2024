#include <iostream>
#include "motor.h"
#include <string>
using namespace std;

int main(){
    Motor motor1{"nissan","gasolina 95",2011,"azul marino",1500};

    motor1.mostrar_Detalles();
}