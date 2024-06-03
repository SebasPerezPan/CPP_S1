#include<iostream>
#include<stdlib.h>

using namespace std; 

int main () {
    string pc_ch;
    int user , pc ;
    int user_lf;
    
    cout<<"Piedra, papel, tijera, reptil, Spock!"<<endl;
    
    cout<<"Cuantas vidas tendra el juego?";
    cin>>user_lf;
    
    int pc_lf = user_lf;

    cout<<"Selecciona:"<<endl<<endl<<"1. Papel."<<endl<<"2. Piedra."<<endl<<"3. Tijera."<<endl<<"4. Reptil."<<endl<<"5. Spock."<<endl;
    cin>>user;
    srand(12345);
//  pc = 1+rand()%(6-1);
    pc = 1 + rand() % 5;
    if (pc == 1) {
        pc_ch = "Papel!";}
    else if (pc == 2) {
        pc_ch = "Piedra!";}
    else if (pc == 3) {
        pc_ch = "Tijera!";}
    else if (pc == 4) {
        pc_ch = "Reptil!";}
    else if (pc == 5) {
        pc_ch = "Spock!";}
    
    cout<<"la maquina eligio "<<pc_ch<<endl;
    
    if (user == pc) {
        cout<<"Hubo un empate."<<endl;}
    else if (user == 1 and (pc == 2 or pc == 5) or user == 2 and (pc == 3 or pc == 4) or user == 3 and ( pc == 1 or pc == 4 ) or user == 4 and (pc == 5 and pc == 1) or user == 5 and (pc == 3 or pc == 2)) {
        cout<<"Ganaste!"<<endl;
        pc_lf -= 1;}
    else 
        {cout<<"Perdiste!"<<endl;
        user_lf -=1;}

    if (user == 3 and pc == 1 or user == 1 and pc == 3)  {
        cout<<"Tijeras cortan papel!";}
    else if (user == 3 and pc == 4 or user == 4 and pc == 3) {
        cout<<"Las tijeras decapitan al reptil!";}
    else if (user == 1 and pc == 2 or user == 2 and pc == 1) {
        cout<<"Papel cubre piedra!";}
    else if (user == 2 and pc == 4 or user == 4 and pc == 2){
        cout<<"Piedra golpea reptil!";}
    else if (user == 4 and pc == 5 or user == 5 and pc == 4) {
        cout<<"Reptil envenena a Spock!";}
    else if (user == 5 and pc == 3 or user == 5 and pc == 3) {
        cout<<"Spock golpea las tijeras!";}
    else if (user == 2 and pc == 3 or user == 3 and pc == 2) {
        cout<<"La piedra rompe la tijera";}
    else if (user == 4 and pc == 1 or user == 1 and pc == 4) {
        cout<<"El reptil se come el papel!";}
    else if (user == 1 and pc == 5 or user == 5 and pc == 1) {
        cout<<"El papel refuta a Spock!";}
    else if (user == 5 and pc == 2 or user == 2 and pc == 5) {
        cout<<"Spock vaporiza la piedra!";}
    cout<<"Tienes: "<<user_lf<<" vidas, mientras que la computadora tiene: "<<pc_lf<<" vidas.";
    return 0;
}
