#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para verificar si un número es primo
bool prime(int p) {
    int h = 2;
    while (p % h != 0) {
        h++;
    }
    if (h == p) {
        return true;
    } else {
        return false;
    }
}

// Función para generar un número primo aleatorio
int id_primo() {
    int divisor = 2;
    int numero;
    do {
        numero = rand() % 1000 + 1; // Genera un número aleatorio entre 1 y 1000
        while (divisor < numero && numero % divisor != 0) {
            divisor++;
        }
    } while (divisor < numero); // El bucle continuará mientras divisor sea menor que numero
    return numero;
}

// Función para crear un álbum
void album_creacion(int c, int m, int id) {
    // Código para la creación del álbum...
}

// Función para crear álbumes
void album(int id_album) {
    // Código para la creación de álbumes...
}

int main() {
    srand(time(0)); // Inicializar la semilla del generador de números aleatorios con el tiempo actual
    int valor;
    cout << "Digite el ID del Álbum: ";
    cin >> valor;
    album(valor);
    return 0;
}
