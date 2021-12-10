#include <iostream>
#include <stdexcept>

using namespace std;


 class CuentaBancaria{
   int numeroCuenta;
   string nombreTitular;
   double saldo;

   public: CuentaBancaria(int n, string no, double s){


        //try{
            if (s< 1){
            throw std::invalid_argument( "saldo invalido " );
            }
            numeroCuenta = n;
            nombreTitular = no;
            saldo = s;
        //}
        //catch(const std::exception& e){
        //}
    }

   public :
    double getsaldo(){
    return saldo;
    }
    int getnumeroCuenta(){
    return numeroCuenta;
    }
    string getnombreTitular(){
    return nombreTitular;
    }
    void depositar(double importeDepositar){
        if (importeDepositar>0){
                saldo = saldo+importeDepositar;
        }
    }
    void retiro(double importeRetiro){
        if ((saldo-importeRetiro)>=0 && (importeRetiro>0)){
                saldo = saldo-importeRetiro;
        }
    }

};
int main(){
    CuentaBancaria c(7,"mario",2.2);
    //c.retiro(-0.1);
    //c.depositar(25);
    cout << " respuesta: " << c.getsaldo() << endl;
    cout << " respuesta: " << c.getnumeroCuenta() << endl;
    cout << " respuesta: " << c.getnombreTitular() << endl;



    return 0;
}



