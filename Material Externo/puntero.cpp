#include <iostream>

using namespace std;


char variable_a[100] = "Hola mundo";
char* variable_b;
// The first one is a char array that stores a string inneficiently because of the space it takes. The second one is a pointer that stores the address of the first variable,it's more efficient.

int main() {

    
    int num, *dir_num;
    //Asignamos la dirección de memoria de la variable num a la variable dir_num.
    num = 10;
    dir_num = &num;
    cout << "El valor de num es: " << num << endl;
    //Esta es la direccion de memoria donde se encuentra la variable.
    cout << "La dirección de num es: " << &num << endl;

    cout << "El valor de dir_num es: " << *dir_num << endl;
    return 0;
}
