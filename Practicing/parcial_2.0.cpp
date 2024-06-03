#include<iostream>
#include<cstdlib> // Para la función rand()
#include<ctime>   // Para la función time()
using namespace std;

int main() {
    cout << "Bienvenido al Software de Viajeiton!" << endl;
    int filas, columnas;

    // Preguntamos la cantidad de vuelos y pasajeros
    cout << "¿Cuántos vuelos ocurrieron?" << endl;
    cin >> columnas;
    cout << "¿Cuántos pasajeros hay?" << endl;
    cin >> filas;

    // Inicializamos la semilla del generador de números aleatorios
    srand(time(0));

    // Definimos la matriz vuelo con los tamaños proporcionados
    int vuelo[filas][columnas];

    // Llenamos la matriz con valores aleatorios
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            vuelo[i][j] = rand() % 100 + 1; // Generamos valores aleatorios entre 1 y 100
        }
    }

    // Imprimimos la matriz
    cout << "Matriz de vuelo:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << vuelo[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
