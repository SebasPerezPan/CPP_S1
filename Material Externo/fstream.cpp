#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void escribir();

void escribir_();

int main() {
    escribir_();
    system("pause");//Pausa el programa para que no se cierre la consola.
    return 0;
}


void escribir(){
    ofstream archivo;
    
    archivo.open("./documentos/texto_1.txt", ios::out); //Abriendo el archivo.

    if(archivo.fail()){
        cout << "No se pudo abrir el archivo." << endl;
        exit(1);//Termina el programa.
    } //Verificando si el archivo se abrió correctamente.

    archivo<<"Continuamos practicando a ver que pasa.";
    archivo.close();
}
void escribir_(){
    ofstream archivo;
    archivo.open("/home/sebas/Documentos/texto_1.txt", ios::out); //Abriendo el archivo.
    if(archivo.fail()){
        cout << "No se pudo abrir el archivo." << endl;
        exit(1);//Termina el programa.
    } //Verificando si el archivo se abrió correctamente.
    archivo<<"Ahora utilizando de forma mas rigurosa el file system.";

    archivo.close();
}