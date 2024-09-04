#include <iostream>
#include <string>

class Account{
    public:
    Account(unsigned int nombre_cuenta,std::string first_name, std::string last_name, double balance):nombre_cuentap{nombre_cuenta},first_namep{first_name},last_namep{last_name},balancep{balance}{}

    private:
    unsigned int nombre_cuentap;
    std::string first_namep;
    std::string last_namep;
    double balancep;
};