#include "personaje.h"

using namespace std;

int main(){
    Personaje uno("mr chetos", 100);
    cout<<"nombre: "<<uno.getNombre()<<endl;
    cout<<"Puntos de vida: "<<uno.getPuntoVida()<<endl;

    cout<<"personaje atacado:  "<<uno.getNombre()<<endl;
    cout<<"vida inicial: "<<uno.getPuntoVida()<<endl;
    uno.recibirGolpe(100);
    cout << "los enemigos de esta zona tiene un atk base de 43 de daño"<<endl;
    cout<<"Vida: "<<uno.getPuntoVida()<<endl;

    uno.comer(30);
    cout << "regenerando vida 30pts"<<endl;

    cout<<"Vida: "<<uno.getPuntoVida()<<endl;

    return 0;
}
