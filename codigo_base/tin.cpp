#include <iostream>

using namespace std;
//int a es para variables constantes. &a es para cambiantes. 
//es necesario definir elntipo de variables que van a entrar y salir.
//como turno,a , b , fama y punto se van a actualizar con cada vuelta, los pobemos.
//la eleccion de jugador no, ese es un input dentro de, por eso las definimos adentro.
void intento(int &turno, int a, int b, int &fama, int &punto) {
//empezamos con un if que haga la función de ciclo. if ~> ejecuta. else para.
    if (turno != 0) {
        int c, d;
        cout << "Jugador 2, ingresa la primera cifra: " << endl;
        cin >> c;
        cout << "Ahora, ingresa la segunda cifra: " << endl;
        cin >> d;

        if (a == c && b == d) {
            cout << "Ganaste" << endl;
        } else if (a == c || b == d) {
            cout << "Fama!" << endl;
            fama++;
            turno--;
//invocamos la función dentro de la función cuando necesitemos que vuelva a correr.
            intento(turno, a, b, fama, punto);
        } else if (a == d || b == c) {
            cout << "Punto!" << endl;
            punto++;
            turno--;
            intento(turno, a, b, fama, punto);
        } else if (a == d && b == c) {
            cout << "Punto!" << endl;
            punto += 2;
            turno--;
            intento(turno, a, b, fama, punto);
        } else {
            cout << "Sigue intentando!" << endl;
            turno--;
            intento(turno, a, b, fama, punto);
        }
    } else {
        cout << "Perdiste, era " << a << b << endl;
    }
}

int main() {
    int a, b, turno = 5, fama = 0, punto = 0;
    cout << "Jugador 1, ingrese la primera cifra: " << endl;
    cin >> a;
    cout << "Ahora, ingrese la segunda cifra: " << endl;
    cin >> b;

    if (a > 9 || b > 9 || a <= 0  ) {
        cout << "Fallo en el código" << endl;
    } else {
        cout << "Listo, el número que seleccionaste es: " << a << b << endl;
        intento(turno, a, b, fama, punto);
    cout<<"la cantidad de puntos fue: "<<punto<<"de fama fue: "<<fama<<"La cantidad de intentos fue"<<turno;
    }

    return 0;
}