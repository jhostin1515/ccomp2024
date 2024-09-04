#include <iostream>
#include <string>

class Factura{

    public:
    Factura(int n_pieza,std::string descripcion,int cantidad,int precio):descripcionp{descripcion},igvp{0.20},descuentop{0}{
        if(n_pieza>0){
            n_piezap=std::to_string(n_pieza) ;
        }
        if(cantidad>0){
            cantidadp=cantidad;
        }
        if(precio>0){
            preciop=precio;
        }
    }

    std::string get_Npieza()const{
        return n_piezap;
    }
    std::string get_Descripcion()const{
        return descripcionp;
    }
    int get_Cantidad()const{
        return cantidadp;
    }
    int get_Precio()const{
        return preciop;
    }
    double get_Igv()const{
        return igvp;
    }
    double get_Descuento(){
        return descuentop;
    }


    void set_Npieza(int n_pieza){
        if(n_pieza>0){
            n_piezap=std::to_string(n_pieza) ;
        }
    }
    void set_Descripcion(std::string descripcion){
        descripcionp=descripcion;
    }
    void set_Cantidad(int cantidad){
        if(cantidad>0){
            cantidadp=cantidad;
        }
    }
    void set_Precio(int precio){
        if(precio>0){
            preciop=precio;
        }
    }
    void set_Igv(double igv){
        if(igv>0){
            igvp=igv;
        }
    }
    void set_Descuento(double descuento){
        if(descuento>0){
            descuentop=descuento;
        }
    }

    double dar_Factura()const{
        double total{0};
        total=total+((preciop*cantidadp)+((preciop*cantidadp)*igvp)-((((preciop*cantidadp)+((preciop*cantidadp)*igvp))*descuentop))); //el descuento se aplica al valor final , luego de aumentar el igv al precio
        return total;
    }

    private:

    std::string n_piezap;
    std::string descripcionp;
    int cantidadp{0};
    int preciop{0};
    double igvp{0};
    double descuentop{0};
};