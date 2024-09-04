#include <string>
#include <iostream>

class Corazon{
    public:
    Corazon(std::string nombre, std::string apellido, int dia, int mes, int año):nombrep{nombre},apellidop{apellido},day{dia},mounth{mes},year{año}{

    }

    std::string get_Nombre()const{
        return nombrep;
    }
    std::string get_Apellido()const{
        return apellidop;
    }
    int get_Dia()const{
        return day;
    }
    int get_Mes()const{
        return mounth;
    }
    int get_Año()const{
        return year;
    }

    void set_Nombre(std::string nombre){
        nombrep=nombre;
    }
    void set_Apellido(std::string apellido){
        apellidop=apellido;
    }
    void set_Day(int dia){
        day=dia;
    }
    void set_Mes(int mes){
        mounth=mes;
    }
    void set_Año(int año){
        year=año;
    }

    int calcular_Edad()const{
        int dia_actual{31},mes_actual{8},año_actual{2024};
        int edad{año_actual-year};
        if(mes_actual>mounth){
            return edad;
        }
        if(mes_actual<mounth){
            return edad-1;
        }
        if(dia_actual>=day){
            return edad;
        }
        return edad-1;
    }
    double frecuencia_Maxima(Corazon persona_elegida)const{
        int edad{persona_elegida.calcular_Edad()};
        int formula{220-edad};
        return formula;
    }
    void frecuencia_Objetivo(Corazon persona_elegida)const{
        double frecuencia_max{persona_elegida.frecuencia_Maxima(persona_elegida)};
        double rango_min{frecuencia_max/2};
        double rango_max{0.85*frecuencia_max};
        std::cout<<"su frecuencia deberia estar entre el rango de "<<rango_min<<" a "<<rango_max<<std::endl;
    }

    private:

    std::string nombrep;
    std::string apellidop;
    int day{0};
    int mounth{0};
    int year{0};
};