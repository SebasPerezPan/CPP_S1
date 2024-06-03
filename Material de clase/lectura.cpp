#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{   
    string line;
    ifstream myfile2("example.txt");
    //myfile2 es una variable de tipo ifstream. Va a contener toda la info que necesito para poder referenciar example.txt
    
    //Mas que el nombre, example.txt debe ser la ruta.
    if (myfile2.is_open()){
        //Si el archivo no abre es por fallos en el nombre, ruta o permisos.
        //is_open() devuelve un bool.
        while(getline(myfile2, line)){
            //getline lee el archivo. (file, string.). Se acaba el while(bool) cuando llega al final del archivo.
            cout<<line<<"\n";
        }
        myfile2.close();
    }
    else cout<<"No se pudo abrir";
    return 0;
}


//Tarea
//Split C++
//Buscar la letra de una cancion y buscar todas las palabras que contienen la letra a.

