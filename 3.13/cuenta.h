#include <string>
#include <iostream>

class Account{
public:

Account(std::string Account_name,int initial_balance):name{Account_name}{
    if(initial_balance>0){
        balance=balance+initial_balance;
    }
}

std::string get_Name()const{
    return name;
}

int get_Balance()const{
    return balance;
}

void set_Name(std::string account_name){
    name=account_name;
}

void set_Deposit(int ingreso){
    if(ingreso>0){
        balance=balance+ingreso;
    }
}
std::string retiro(int retirar){
    if(retirar>balance){
        return "El monto del retiro excedió el saldo de la cuenta";
    }
    balance=balance-retirar;
    return "exito";
}
void mostrar_Cuenta(Account cuenta_elegida){
    std::cout<<cuenta_elegida.get_Name()<<" tiene "<<cuenta_elegida.get_Balance()<<std::endl;
}

private:

int balance{0};
std::string name;

};