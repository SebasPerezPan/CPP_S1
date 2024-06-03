#include <iostream>
#include <math.h>

//cmath para sqrt y pow.
// pow((coeficiente), exponente)igualmente con sqrt.
//en python hay sue importar math y va como math.sqrt
using namespace std;

int main () {

    int a, b, c, d, e;

    cout<<"Ingresa el valor del primer cateto \n";
    cin>>a;
    cout<<"Ingresa el valor del segundo cateto \n";
    cin>>b;

    float teorema = sqrt(a*a + b*b);
    cout<<"La Hipotenusa del programa es: \n"<<teorema;
    cout<<"Los catetos fueron "<<a<<" y "<<b;

    cout<<"Lo siguiente seria contar los dias, selecciona un numero de anos primero:\n";
    cin>>a;
    cout<<"Ahora, un numero de meses\n";
    cin>>b;
    cout<<"Ahora, un numero de semanas\n";
    cin>>c;
    cout<<"Por ultimo, dame un numero de dias!\n";
    cin>>d;
    int conteo = (a*365 + b*31) + (c*7 + d);
    cout<<"Muchas gracias, el total en dias de esta operacion es\n"<< conteo;

    cout<<" A continuacion, haremos la lista de la compra! Agrega el valor del primer producto!";
    cin>>a;
    cout<<"Anade el segundo. ";
    cin>>b;
    cout<<"Anade el tercero. ";
    cin>>c;
    cout<<"Anade el cuarto. ";
    cin>>d;
    cout<<"Anade el ultimo valor. ";
    cin>>e;
    float siva = a + b + c + d + e;
    siva = siva + siva*0.19;
    cout<<"El total de la compra es "<<siva;
    
    return 0;
}
