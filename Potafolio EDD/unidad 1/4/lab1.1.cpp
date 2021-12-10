#include <iostream>
#include <math.h>

using namespace std;

void triangulo(){
double A, B, C, area, S;

cout << "Ingrese el primer lado:  " <<endl;
cin >>A;
cout << "Ingrese el segundo lado:  " <<endl;
cin >>B;
cout << "Ingrese el tercer lado:  " <<endl;
cin >>C;

if (((A+B)>C) && ((A+C)>B) && ((B+C)>A)){
    if ( A==B && A==C){
        cout << "Equilatero" << endl;
    }
    else if (A==B || B==C || A==C){
        cout << "Isosceles" << endl;
    }
    else{
        cout << "Escaleno" << endl;
    }

    S =(A+B+C)/2;
    area = sqrt(S * (S-A) * (S-B)* (S-C));

    cout << "el area es: "<<area<<endl;
}
else{
    cout << "no es un triangulo" << endl;
}
}

void mayor(){
double A, B, C, D, E;

cout << "Ingrese primer numero:  " <<endl;
cin >>A;
cout << "Ingrese segundo numero:  " <<endl;
cin >>B;
cout << "Ingrese tercer numero:  " <<endl;
cin >>C;
cout << "Ingrese cuarto nuemro:  " <<endl;
cin >>D;
cout << "Ingrese quinto nuemro:  " <<endl;
cin >>E;

if (A>B && A>C && A>D && A>E ){
    cout << "A es el numero mayor: "<< A << endl;
}
else if(B>A && B>C && B>D && B>E ){
    cout << "B es el numero mayor: "<< B << endl;
}
else if(C>A && C>B && C>D && C>E ){
    cout << "C es el numero mayor: "<< C << endl;
}
else if(D>A && D>C && D>B && D>E ){
    cout << "D es el numero mayor: "<< D << endl;
}
else if(E>A && E>C && E>D && E>B ){
    cout << "E es el numero mayor: "<< E << endl;
}


}

void bucle(){
int NC;
int C;
int Cnt = 1;
float P;
float acum = 0;


cout << "cuantos numeros quiere hacer promediar: "<<endl;
cin >> NC;

do
{
    cout << "numero #" <<Cnt<<endl;
    cin >> C;
    acum += C;
    Cnt++;
}while(Cnt<=NC);

P=acum / NC;

cout<<"el promedio es: "<<P<<endl;

}

int main(){
    cout << "Gabriel Alejandro Diaz Vega Deras dv100217" <<endl;
cout << "primer ejercicio:  " <<endl;

triangulo();
cout << "segundo ejercicio:  " <<endl;
mayor();
cout << "tercer ejercicio:  " <<endl;
bucle();


}
