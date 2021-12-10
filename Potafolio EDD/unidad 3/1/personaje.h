#include <iostream>
#include <string>

using namespace std;

class Personaje {
    private:
        string nombre;
        int puntoVida;
        //string estaVivo;
    public:
        Personaje(string no, int pv);
        string getNombre();
        int getPuntoVida();
        //string getEstaVivo();
        void recibirGolpe(int puntosPerdidos);
        void comer(int puntosGanados);
};
Personaje::Personaje(string no, int pv){
        if (puntoVida < 0){
            this->puntoVida = 0;
        }else{
            this->puntoVida = pv;
        }
        this->nombre = no;
}

int Personaje::getPuntoVida(){
    return this->puntoVida;
}

string Personaje::getNombre(){
    return this->nombre;
}

void Personaje::recibirGolpe(int puntosPerdidos){
    if(puntosPerdidos>0){
        this->puntoVida -= puntosPerdidos;
    }else{
        cout << "! - no pierde puntos de vida" << endl;
    }
}

void Personaje::comer(int puntosGanados){
    if(puntosGanados>0 && puntoVida>0){
        this->puntoVida += puntosGanados;
        cout<<"! - regenerando 30 puntos de vida "<<endl;
    }else{
        cout << "! - no gana puntos de vida estas muerto" << endl;
    }
}




