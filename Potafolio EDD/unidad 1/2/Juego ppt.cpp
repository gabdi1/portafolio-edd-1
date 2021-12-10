#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


using namespace std;
int main(){

int movJug;
cout <<"Gabriel Alejandro Diaz Vega Deras dv100217 \n";
cout <<"jugaremos a piedra papel, tijera lagarto spock \n";
cout <<"1.Piedra\n 2.Papel\n 3.Tijeras\n 4.Lagarto\n 5.Spock \n";


cin >> movJug;
srand(time(0));
string movComp;
int numMov = rand() % 5 + 1;

switch(numMov){

case 1:
movComp= "Piedra";
break;

case 2:
movComp= "Papel";
break;

case 3:
movComp= "Tijeras";
break;

case 4:
movComp= "Lagarto";
break;

case 5:
movComp= "Spock";
break;
}

cout <<" La computadora escogio: " << movComp << endl;
if (movJug == numMov){
cout << " Empate \n";

}else if ((movJug == 1) && (numMov == 3)){
cout << " Ganastes \n";
}else if ((movJug == 2) && (numMov == 1)){
cout << " Ganastes \n";
}else if ((movJug == 3) && (numMov == 2)){
cout << " Ganastes \n";
}else if ((movJug == 1) && (numMov == 4)){
cout << " Ganastes \n";
}else if ((movJug == 4) && (numMov == 5)){
cout << " Ganastes \n";
}else if ((movJug == 5) && (numMov == 3)){
cout << " Ganastes \n";
}else if ((movJug == 3) && (numMov == 4)){
cout << " Ganastes \n";
}else if ((movJug == 4) && (numMov == 2)){
cout << " Ganastes \n";
}else if ((movJug == 2) && (numMov == 5)){
cout << " Ganastes \n";
}else if ((movJug == 5) && (numMov == 1)){
cout << " Ganastes \n";
}else{
    cout << " perdistes \n";
}
return 0;
}
