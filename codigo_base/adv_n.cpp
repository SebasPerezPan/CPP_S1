#include<iostream>
#include<math.h>

using namespace std;

void intento(int &turno, int a, int b, int &fama, int &punto) {
        if (!= 0) {
        cout<<"Jugador 2, ingresa la primera cifra"<<endl;
        cin>>c;
        cout<<"Ahora, ingrese la segunda cifra!"<<endl;
        cin>>d;
        
            if (a == c and b == d) {
                cout<<"Ganaste";}
            else if (a == c or b == d){
                cout<<"Fama!";
                fama++;
                turno--;
                intento(turno,a,b,turno, punto);
            }
            else if (a == d or b == c){
                cout<<"Punto!";
                punto++;
                turno--;
                intento(turno,a,b,turno, punto);
            }
            else if (a == d and b == c) {
                cout<<"Punto!"
                turno--;
                intento(turno,a,b,turno, punto);
            }
            else
                {cout<<"Sigue intentando!";
                turno --;
                intento(turno,a,b,turno, punto);
                }}
        else {
            cout<<"Perdiste!";
        }}

int main(){
    int a , b , c , d ,fama, turno, punto;
    cout<<"Jugador 1, ingrese la primera cifra!"<<endl;
    cin>>a;
    cout<<"Ahora, ingrese la segunda cifra!"<<endl;
    cin>>b;
    turno = 5;

    

    if ((a or b )> 9 or a <= 0) {
        cout<<"Fallo en el codigo";
    }
    else
        {cout<<"Listo, el numero que seleccionaste es: "<<a<<b<<endl;
        intento(turno,a,b);
        }
    
    return 0;
}

