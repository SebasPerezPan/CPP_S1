#include<iostream>
#include<cmath>

using namespace std;

int main(){



cout<<"Calculadora de Casa"<<endl;

//Se van a definir variables para cantidades de cada cosa, ya sea banhos o cuartos.
//Hice primero la opcion mas larga, la de los 3 cuartos y luego solo fue copiar y pegar lo hecho.
//Por lo general, hay al final de cada grupo  de codigo, una ultima linea que imprime valor en metros.

float n_hab = 0 , hab_aa = 0 , hab_al= 0 , hab_bl = 0 , hab_ba = 0 , hab_ca = 0 , hab_cl = 0 ; 
float dim_hab_a = 0 ,dim_hab_c = 0 , dim_hab_b = 0;
float dim_habs = 0 , dim_gar = 0 , dim_social = 0 , ar_social = 0 , patio = 0 , pat_l = 0 , pat_a = 0 , dim_patio =0 ;
float n_ban = 0 , dim_ban = 0 , n_ban_prem = 0 , n_ban_reg = 0, garaje = 0 , gar_size = 0 ; 


cout<<"Cuantas habitaciones va a tener la casa?";
cin>>n_hab;


if (n_hab >= 3)
   {n_hab = 3;
    cout<<"Cual es el valor de ancho del primer cuarto?"<<endl;
    cin>>hab_aa;
    cout<<"Cual es el valor de largo del primer cuarto?"<<endl;
    cin>>hab_al;

    if (hab_aa >= 10){
        hab_aa = 10;}
    else if (hab_aa <= 2){
        hab_aa = 2;}
    if (hab_al > 10){
        hab_al = 10;}
    else if (hab_al <= 2){
        hab_al = 2;}

    dim_hab_a = hab_aa * hab_al;
    
    cout<<"El area del cuarto es de"<<dim_hab_a<<"m"<<endl;
    
    cout<<"Cual es el valor de ancho del segundo cuarto?"<<endl; 
    cin>>hab_ba;
    cout<<"Cual es el valor de largo del segundo cuarto?"<<endl;
    cin>>hab_bl;

    if (hab_ba >= 10) {
        hab_ba = 10;}
    else if (hab_ba <= 2){
        hab_ba = 2;}
    if (hab_bl > 10){
        hab_bl = 10;}
    else if (hab_bl <= 2){
        hab_bl = 2;}

    dim_hab_b = hab_ba * hab_bl;
    
    cout<<"El area del cuarto es de"<<dim_hab_b<<"m"<<endl;

    cout<<"Cual es el valor de ancho del tercer cuarto?"; 
    cin>>hab_ca;
    cout<<"Cual es el valor de largo del tercer cuarto?";
    cin>>hab_cl;
    
    if (hab_ca >= 10){
        hab_ca = 10;}
    else if (hab_ca <= 2){
        hab_ca = 2;}
    if (hab_cl > 10){
        hab_cl = 10;}
    else if (hab_cl <= 2){
        hab_cl = 2;}
    dim_hab_c = hab_ca * hab_cl;

    cout<<"El area del cuarto es de"<<dim_hab_c<<"m"<<endl;

    }
//Dos habitaciones. 
else if (n_hab == 2){
    cout<<"Cual es el valor de ancho del primer cuarto?"<<endl;
    cin>>hab_aa;
    cout<<"Cual es el valor de largo del primer cuarto?"<<endl;
    cin>>hab_al;

    if (hab_aa >= 10){
        hab_aa = 10;}
    else if (hab_aa <= 2){
        hab_aa = 2;}
    if (hab_al > 10){
        hab_al = 10;}
    else if (hab_al <= 2){
        hab_al = 2;}

    dim_hab_a = hab_aa * hab_al;
    
    cout<<"El area del cuarto es de"<<dim_hab_a<<"m"<<endl;
    
    cout<<"Cual es el valor de ancho del segundo cuarto?"<<endl; 
    cin>>hab_ba;
    cout<<"Cual es el valor de largo del segundo cuarto?"<<endl;
    cin>>hab_bl;

    if (hab_ba >= 10) {
        hab_ba = 10;}
    else if (hab_ba <= 2){
        hab_ba = 2;}
    if (hab_bl > 10){
        hab_bl = 10;}
    else if (hab_bl <= 2){
        hab_bl = 2;}

    dim_hab_b = hab_ba * hab_bl;
    
    cout<<"El area del cuarto es de"<<dim_hab_b<<"m"<<endl;
    }
// 1 habitacion.
else if (n_hab <= 1){
    cout<<"Cual es el valor de ancho del primer cuarto?"<<endl;
    cin>>hab_aa;
    cout<<"Cual es el valor de largo del primer cuarto?"<<endl;
    cin>>hab_al;

    if (hab_aa >= 10){
        hab_aa = 10;}
    else if (hab_aa <= 2){
        hab_aa = 2;}
    if (hab_al > 10){
        hab_al = 10;}
    else if (hab_al <= 2){
        hab_al = 2;}

    dim_hab_a = hab_aa * hab_al;}

dim_habs = dim_hab_c + dim_hab_a + dim_hab_b;

cout<<"Entendido, el numero de habitaciones es "<<n_hab<<" para un total de"<<dim_habs<<"m.";

//Continuamos con los banhos. 

cout<<"Cuantos banhos tendra la casa?";
cin>>n_ban;
cout<<"Cuantos de estos baños quieres que sean Premium?";
cin>>n_ban_prem;

int ban_prem = 9, ban_reg = 5;


if (n_ban_prem >= n_ban){
    cout<<"El resultado del calculo sera inpreciso.";}

if (n_ban >= 3){
    n_ban =3;}
else if (n_ban <= 1){
    n_ban = 1;}

if (n_ban_prem >= 3){
    n_ban_prem =3;}
else if (n_ban_prem <= 1){
    n_ban_prem = 1;}

n_ban_reg = n_ban - n_ban_prem;

dim_ban = ban_prem * n_ban_prem + (n_ban_reg * ban_reg);

cout<<"El area del banho es de "<<dim_ban<<" m";

//Area social. Si el usuario no elije una de las dos opciones alrededor del area social, se le asignara el 

dim_social = 0;

cout<<"Respecto al area social, prefieres?"<<endl<<"1. Regular."<<endl<<"2. Premium"<<endl;
cin>>ar_social;

if (ar_social == 2){
    dim_social = 40;}
else{
    dim_social = 20;}

//Patio. 

dim_patio = 0;
cout<<"La casa tiene patio?"<<endl<<"1. Si."<<endl<<"2. No.";
cin>>patio;
if (patio == 1){
    cout<<"Cual es el valor de ancho del patio?";
    cin>>pat_a;
    cout<<"Cual es el valor de largo del patio?";
    cin>>pat_l;
    if (pat_a >= 10){
        pat_a = 10;}
    else if (pat_a <= 2){
        pat_a = 2;}
    if (pat_l > 10){
        pat_l = 10;}
    else if (pat_l <= 2){
        pat_l = 2;}

    dim_patio = pat_a * pat_l;}
    

else if (patio == 2){
    dim_patio = 0;}

cout<<"El tamaño del patio es de"<<dim_patio<< "m.";

cout<<"La casa tiene garaje?"<<endl<<"1. Si"<<endl<<"2. No.";
cin>>garaje;
cout<<"El garaje es: "<<endl<<" 1. Doble."<<endl<<"2. Sencillo.";
cin>>gar_size;
if (garaje == 1){
    if (gar_size == 1){
        dim_gar = 20;}
    else if (gar_size == 2){
        dim_gar = 10;}
cout<<"El tamaño del garaje es de" <<dim_gar<<"m.";}
else if (garaje != 1){dim_gar = 0;}

float  dim_mx = 100, dim_a , val_tc = 1000000000 , sub_dim_total , val_tot = 0, val_gar = 0 , val, dim_total;

dim_a = dim_habs + dim_patio + dim_ban + dim_social;

sub_dim_total = dim_a * 1.25;

dim_total = sub_dim_total + dim_gar;



if (dim_mx >= sub_dim_total){
    val_tot = 8000000 * sub_dim_total;}
else if (dim_mx <= sub_dim_total){
    val_tot = 9000000 * sub_dim_total;}

val_gar = dim_gar * 5000000;

val = val_tot + val_gar;


if (val >= val_tc){
    val = val * 0.95;}

cout<<"El tamaño total en m es de: "<<dim_total<<endl;
cout<<"El valor total de la casa sera de: $ "<<val<<endl;


//Punto 2
cout<<"Punto 2, Ecuacion."<<endl;

double x , y ,z;
cout<<"Ingrese el valor de x ";
cin>>x;
cout<<"Ingrese el valor de y";
cin>>y;
z = (pow ((sqrt(5*x) + sqrt((sqrt(pow(y,(x-1)))) / (y + (2 * x)))),3)
)  - ( (pow(x,6)) / ((pow(y,3)) * x) + 1) - 3 * ((sqrt(3)) + sqrt(sqrt(x-1)));

cout<<z;
return 0;
}