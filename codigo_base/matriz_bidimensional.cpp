#include <iostream>
using namespace std;

int main() {
    int matriz[5][5];

// Rellenar la primera columna de la matriz con los índices de las filas
for(int i = 0; i < 5; i++) {
    matriz[i][0] = i;
}

// Rellenar la primera fila de la matriz con los índices de las columnas
for(int j = 0; j < 5; j++) {
    matriz[0][j] = j;
}

    for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
        cout << matriz[i][j] << "\t";
    }
    cout << endl;
}

    return 0;
}
