#include <iostream>
using namespace std;

int main () {
    int macadamia[10];
    
    // Rellenar el arreglo
    for(int i = 0; i < 10; i++){
        macadamia[i] = rand()%100; // Puedes poner cualquier valor aquí

        }
    
    
    // Imprimir el arreglo
    cout << "Lista: ";
    for(int i = 0; i < 10; i++) {
        cout << macadamia[i] << " ";
    }
    
    return 0;
}
