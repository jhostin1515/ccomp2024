#include "cuenta.h"
#include <iostream>
#include <string>


int main(){
    Account myAccount{"jhostin",480};
    std::cout<<myAccount.get_Name()<<std::endl;
    std::cout<<myAccount.get_Balance()<<std::endl;
    std::cout<<myAccount.retiro(500)<<std::endl;
    std::cout<<myAccount.get_Balance()<<std::endl;

    return 0;
}