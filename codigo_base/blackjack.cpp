#include<iostream>

using namespace std;

int main()
{   
    srand (time(NULL));
    int a , b , c = 0 , d ;
    cout<<"BlackJack";
    a = 1 + rand() % 12;

    while ( c != 2 and a < 21){
        cout<<"El valor hasta el momento es "<<a<<endl;
        cout<<"Deseas otra carta?"<<endl<<"1. Si."<<endl<<"2. No.";
        cin>>d;
        if (d == 1){
            a = a + (1 + rand() % 12);
            c = c + 1 ;}
        else{
            c = 2;}
    }
    cout<<"El total de las cartas es "<<a<<endl;
    b = 1 + rand() % 21;

    if (a > 21){ 
    cout<<"Perdiste!";}
        
    else if ((b == a) && (a < 21)){
        cout<<"Empataste.";}
    else if (b > a){
        cout<<"Perdiste!";}
    else if (a > b){
        cout<<"Ganaste!";}
}
#include<iostream>

using namespace std;

int main()
{   
    srand (time(NULL));
    int a , b , c = 0 , d ;
    cout<<"BlackJack";
    a = 1 + rand() % 12;

    while ( c != 2 and a < 21){
        cout<<"El valor hasta el momento es "<<a<<endl;
        cout<<"Deseas otra carta?"<<endl<<"1. Si."<<endl<<"2. No.";
        cin>>d;
        if (d == 1){
            a = a + (1 + rand() % 12);
            c = c + 1 ;}
        else{
            c = 2;}
    }
    cout<<"El total de las cartas es "<<a<<endl;
    b = 1 + rand() % 21;

    if (a > 21){ 
    cout<<"Perdiste!";}
        
    else if ((b == a) && (a < 21)){
        cout<<"Empataste.";}
    else if (b > a){
        cout<<"Perdiste!";}
    else if (a > b){
        cout<<"Ganaste!";}
}
