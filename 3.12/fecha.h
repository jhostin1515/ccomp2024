#include <string>
#include <iostream>

class Fecha{
    public:

    Fecha(int mes,int dia,int año):diap{dia},añop{año}{
        if(0<mes<13){
            mesp=mes;
        }
    }

    int get_Mes()const{
        return mesp;
    }
    int get_Dia(){
        return diap;
    }
    int get_Año(){
        return añop;
    }
    void set_Mes(int mes){
        if(0<mes<13){
            mesp=mes;
        }
    }
    void set_Dia(int dia){
        diap=dia;
    }
    void set_Año(int año){
        añop=año;
    }

    void mostrar_Fecha(){
        std::cout<<mesp<<"/"<<diap<<"/"<<añop<<std::endl;
        }

    private:

    int mesp{1};
    int diap{0};
    int añop{0};
};