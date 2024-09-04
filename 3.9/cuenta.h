#include <string>

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

private:

int balance{0};
std::string name;

};