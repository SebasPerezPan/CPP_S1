#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int res_qa , res_ho , res_wk , res_mo; 
    
    cout<<"Calculadora de presupuesto investigativo.\nCuantos investigadores van a hacer parte de la investigacion?";
    cin>>res_qa;
    cout<<"Cuanto va a ser el pago estandar por horas de los investigadores?";
    cin>>res_ho;
    cout<<"Cuantas horas semanales trabajaran los investigadores?";
    cin>>res_wk;
    cout<<"Por cuantos meses se extendera el contrato?";
    cin>>res_mo;
    
    int res_total = res_qa * res_ho * res_wk * res_mo * 4;
    int ass_qa , ass_ho , ass_wk , ass_mo; 
    
    cout<<"Cuantos asistentes van a hacer parte de la investigacion?";
    cin>>ass_qa;
    cout<<"Cuanto va a ser el pago estandar por horas de los asistentes?";
    cin>>ass_ho;
    cout<<"Cuantas horas semanales trabajaran los asistentes?";
    cin>>ass_wk;
    cout<<"Por cuantos meses se extendera el contrato?";
    cin>>ass_mo;
    
    int ass_total = ass_qa * ass_ho * ass_wk * ass_mo * 4;

    int equip, trip_qa , trip_pe , trip_valtic , trip_valhosp , trip_qahosp;

    cout<<"Cual es el costo total de los equipos utilizados en la investigacion?";
    cin>>equip;
    
    cout<<"Cuantos viajes son requeridos para la investigacion?";
    cin>>trip_qa;
    cout<<"Cuantas personas del equipo tienen que viajar?";
    cin>>trip_pe;
    cout<<"Cual es el valor por tiquete";
    cin>>trip_valtic;
    cout<<"Cual es el valor por dia de alojamiento?";
    cin>>trip_valhosp;
    cout<<"Cuantos dias planean alojarse?";
    cin>>trip_qahosp;
    
    int trip_total = ((trip_qa*trip_pe*trip_valtic)+(trip_valhosp*trip_qahosp));

    
    int subtotal = trip_total + equip + ass_total + res_total;
    int admin = (res_total +equip + trip_total)*0.30;
    int subtotala = subtotal + admin;
    int subtotalb = subtotala + subtotala*0.19;
    
    cout<<"El subtotal de la investigacion es $ "<<subtotal<<". Aun asi, con los costos de administracion, correspondientes a $ "<<admin<<", tenemos que el valor sin el iva es de $"<<subtotala<<"."<<endl<<"El total contando el iva es de $ "<<subtotalb;
    
    return 0;
}
