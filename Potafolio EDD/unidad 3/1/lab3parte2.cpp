#include <iostream>
#include <stdexcept>

using namespace std;

class Persona{
   int nacio;
    string nombre;
    string ape;

    public: Persona(string n, string a,int an){
    nacio = an ;
    nombre = n;
    ape = a;
    }

    public:
        string nombreCompleto(){
        return  nombre + " " + ape;
        }
        int edad(){
        return 2021 - nacio;
        }
};

int main (){
    Persona p("diluc","albacete",1600);

    cout << " respuesta: " << p.edad() << endl;
    cout << " respuesta: " << p.nombreCompleto() << endl;
}
