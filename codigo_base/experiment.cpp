#include<iostream>

using namespace std;

int main () {

    //Las constantes al no ser modificables, cuando tratas de modificarlas abajo lanzan error de compilacion

    const int edades = 2;
    int list_a [] = {2,4,5,6,7,8,19};
    cout<<list_a [0]<<endl;
    
    // Cout puede interpretar sumas y operaciones.

    int a = 4;
    int b = 5;
    int c = a+b;
    cout<< a + b<<endl;
    cout<< c<<endl;

    // Es posible usar booleanos, imprimir su valor, entendiendo 0 como negativo y 1 como positivo.
    bool d = a < b;
    cout<<d<<endl;
    
    //con este operador podemos cambiar rapidamente el valor. Recuerda que no es necesario volver a declarar el tipo de una variable.
    a += 4;
    cout<<a<<endl;

    //Pedir valor en bytes de la variable. Es util para manejar la cantidad de elementos de una lista. Los int tienen un tamano de 4 bytes.

    cout<<sizeof(a)<<endl;
    cout<<sizeof(list_a)<<endl;
    cout<<sizeof(list_a)/sizeof(a)<<endl;

    //En la logica, es posible utilizar tambien valores booleanos como variable.

    bool res = true && true;
    bool res = !true;

    cout<<res<<endl<<
    
    return 0 ;
} 