#include <string>
#include <iostream>

class ElectricBill{

    public:
    ElectricBill(double monto_pagado){
        if(monto_pagado>0){
            amount_paid=monto_pagado;
        }
    }

    double get_Pago()const{
        return amount_paid;
    }
    void set_Pago(double monto_pagado){
        if(monto_pagado>0){
            amount_paid=monto_pagado;
        }
    }
    double get_Vat()const{
        double vat{0.18*amount_paid};
        return vat;
    }
    double get_Ewura()const{
        double ewura{0.01*amount_paid};
        return ewura;
    }
    double get_Rea()const{
        double rea{0.03*amount_paid};
        return rea;
    }
    double get_Units(ElectricBill usuario_elegido)const{
        double cargo_fijo{5000};
        double precio_kvh{295};
        double monto_final{usuario_elegido.get_Pago()-usuario_elegido.get_Ewura()-usuario_elegido.get_Rea()-usuario_elegido.get_Vat()-cargo_fijo};
        double kvh_comprables{monto_final/precio_kvh};
        return kvh_comprables;
    }


    private:

    double amount_paid{0};


};