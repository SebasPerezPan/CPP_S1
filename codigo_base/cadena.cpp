#include #include using namespace std;
int main(){
string s="Hello World";
char c='l';

//cout<<(char)(c+1);
/*for(int i=32;i<128;i++){ //Todos los caracteres de ASCCI
cout<<"El código ASCII de "< }*/
cout< for(int i=0;i cout< }


int cont=0;
for(int i=0;i cout< if(s[i]==c){//La variable "c" corresponde a la letra L
cont++;
}
}
cout<<"La cadena "<
string subs=s.substr(5);//De la cadena S, toma todos los elementos a partir de la posición 5: En ese caso, a partir del espacio.
cout<
string suba;
for(int i=0;i cout<<"Subcadena a partir de "< suba=s.substr(i);
cout<
}

cout<<"Succadena a partir de la posición 3, 4 caracteres: ";
string sube=s.substr(3,4);//a= posición ; b=cuántos caracteres quiero
cout<
for(int i=0;i for(int j=1;j cout<<"Subcadena a partir de "< string subi=s.substr(i,j);
cout<
}
}

string a="Hola";//Concatenar cadenas
string b="Mundo";
string t=a+" "+b;
cout<
int p=t.find("la");//Encuentra la posicion de una subcadena. Ej, va a buscar en la cadena 'c' la subcadena "la" y nos devuelve la posición en la que se encuentre
cout<


//GUARDAR STRINGS:
//Lectura con cin...no acepta espacios
string fullname;
cout<<"Escriba su nombre: ";
getline(cin, fullname);//Este getline sí acepta cadenas con espacios
cout<<"Su nombre es "< return 0;
}
