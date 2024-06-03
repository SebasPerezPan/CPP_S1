#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main () {
    
    string d , e , f , k;
    
    cout<<"Bienvenido al Casino Ganamucho."<<endl;
    cout<<"Quieres lanzar el primer dado? S / N"<<endl;
    cin>>d;
    
    int a , b , c , g , h , l;
    
    
    srand (time(NULL));
    a = 1 + rand() % 6;
    b = 1 + rand() % 6;
    g = 1 + rand() % 6;
    h = 1 + rand() % 6;
    
    l = g + h;
    if (d == "S" or d == "s") {
        cout<<"El resultado del primer dado es "<<a<<endl;}
        
    else if (d == "N" or d == "n") {
        cout<<"Entiendo. Aunque asi no funciona el juego"<<endl;}
    else {cout<<"Caracter invalido.";}
    
cout<<"Quieres lanzar el segundo dado? S / N"<<endl;
cin>>e;
    if (e == "S" or e == "s") {
        cout<<"El resultado del segundo dado es "<<b<<endl;
        
    }
    else if (e == "N" or e == "n") {
        cout<<"Entiendo. Aunque asi no funciona el juego.";}
    else {cout<<"Caracter invalido.";}

c = a + b ;
    cout<<"Sacaste "<<c<<endl;
    if (c == 2 or c == 3 or c == 12 ) {
        cout<<"Perdiste. Sacaste: "<<c<<endl;
    }
    else if (c == 7 or c == 11){
        cout<<"Ganaste! Sacaste:"<<c<<endl;
    }
    else {cout<<"Continuas con la fase dos, estas listo? S / N";
          cin>>f;
        if (f == "S" or f == "s") {
            cout<<"El valor del dado 1 es de :"<<g<<", el valor del dado 2 es de: "<<h<<". El valor final de los dados es de"<<l<<endl;
            if (l == c) {
                cout<<"Ganaste! El resultado del lanzamiento es de:" ;
            }
            else if (l == 7) {
                cout<<"Perdiste.";
            }
            else if (l != 7 or l != c){
                cout<<"Repite el lanzamiento, tienes 3 intentos mas.";
                cout<<"Enter para continuar.";
                cin>>k;
                g = 1 + rand() % 6;
                h = 1 + rand() % 6;
                l = g + h ;
                cout<<"El valor del dado 1 es de :"<<g<<", el valor del dado 2 es de: "<<h<<". El valor final de los dados es de"<<l<<endl;

                if (l == c) {
                cout<<"Ganaste!";}
                else if (l == 7) {
                cout<<"Perdiste.";}
                else if (l != 7 or l != c){
                    cout<<"Repite el lanzamiento, tienes 2 intentos mas.";
                    cout<<"Enter para continuar.";
                    cin>>k;

                    g = 1 + rand() % 6;
                    h = 1 + rand() % 6;
                    l = g + h ;
                    cout<<"El valor del dado 1 es de :"<<g<<", el valor del dado 2 es de: "<<h<<". El valor final de los dados es de"<<l<<endl;
                    cout<<"Enter para continuar.";
                    cin>>k;
                    cin>>k;
                    
                    if (l == c) {
                    cout<<"Ganaste!";}
                    else if (l == 7) {
                    cout<<"Perdiste.";}
                    else if (l != 7 or l != c){
                        cout<<"Repite el lanzamiento, tienes 1 intentos mas.";
                        cout<<"Enter para continuar.";
                        cin>>k;                        
                        g = 1 + rand() % 6;
                        h = 1 + rand() % 6;
                        l = g + h ;
                        cout<<"El valor del dado 1 es de :"<<g<<", el valor del dado 2 es de: "<<h<<". El valor final de los dados es de"<<l<<endl;
                        if (l == c) {
                            cout<<"Ganaste!";}
                        else {
                            cout<<"Perdiste.";}
                }
            }}}
        
        else if (f == "N" or f == "n") {
            cout<<"Entiendo. Fin del juego.";}
        else {cout<<"Caracter invalido.";}
    
    return 0;}}
