#include <iostream>
#include <string>

class Motor{
    public:

    Motor(std::string marca_i,std::string combustible_i,int año_i,std::string color_i,int motor_i):marca{marca_i},combustible{combustible_i},año{año_i},color{color_i},motor{motor_i}{

    }

    std::string get_Marca()const{
        return marca;
    }
    std::string get_Combustible()const{
        return combustible;
    }
    int get_Año(){
        return año;
    }
    std::string get_Color(){
        return color;
    }
    int get_Motor(){
        return motor;
    }


    void set_Marca(std::string marca_i){
        marca=marca_i;
    }
    void set_Combustible(std::string combustible_i){
        combustible=combustible_i;
    }
    void set_Año(int año_i){
        año=año_i;
    }
    void set_Color(std::string color_i){
        color=color_i;
    }
    void set_Motor(int motor_i){
        motor=motor_i;
    }


    void mostrar_Detalles(){
        std::cout<<"marca: "<<get_Marca()<<std::endl;
        std::cout<<"combustible: "<<get_Combustible()<<std::endl;
        std::cout<<"año: "<<get_Año()<<std::endl;
        std::cout<<"color: "<<get_Color()<<std::endl;
        std::cout<<"motor: "<<get_Motor()<<std::endl;

    }
    private:

    std::string marca;
    std::string combustible;
    int año{0};
    std::string color;
    int motor{0};
};