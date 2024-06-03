#include<iostream>
#include<math.h>

using namespace std;


int main() {

    int diesel_value = 10000;
    int diesel_km = 10;
    int bus_drive = 100000;

    int reg_price_old = 2000;
    int reg_price_std = 2100; 
    int reg_price_pub= 1500;
    int reg_price_ord = 3000;

    int distance;

    cout<<"Bienvenido a la calculadora de ganancia para el sistema Transmillar.";
    cout<<"Para empezar a calcular los costos introduzca la distancia recorrida a continuacion:"<<endl;
    cin>>distance;

    cout<<"Muy bien, entonces empezamos con: "<<distance<<" km."<<endl;

    int bus_diesel =diesel_km*diesel_value*distance;

    cout<<"Con esto tenemos que el gasto total en diesel es de $"<<bus_diesel<<endl;

    int reg_ord_qa , reg_std_qa , reg_pub_qa , reg_old_qa;

    int val_price_old = reg_price_old*0.70;
    int val_price_std = reg_price_std*0.70; 
    int val_price_pub= reg_price_pub*0.70;
    int val_price_ord = reg_price_ord*0.70;

    cout<<"Respecto a la venta de boleteria en el horario normal."<<endl<<"Cuantos boletos ordinarios fueron vendidos?"<<endl;
    cin>>reg_ord_qa;
    cout<<"Cuantos boletos para la tercera edad fueron vendidos?"<<endl;
    cin>>reg_old_qa;
    cout<<"Cuantos boletos para estudiantes fueron vendidos?"<<endl;
    cin>>reg_std_qa;
    cout<<"Cuantos boletos para la fuerza publica fueron vendidos?"<<endl;
    cin>>reg_pub_qa;
    
    int reg_qa = reg_ord_qa + reg_std_qa + reg_pub_qa + reg_old_qa;
    int reg_value = reg_ord_qa*reg_price_ord + reg_std_qa*reg_price_std + reg_pub_qa*reg_price_pub + reg_old_qa*reg_price_old;


    cout<<"Para un total de "<<reg_qa<<" boletos vendidos en el horario normal."<<endl<<"Y un total recaudado de $"<<reg_value<<endl;

    int val_old_qa , val_ord_qa , val_pub_qa , val_std_qa;
    cout<<"Respecto a la venta de boleteria en el horario valle."<<endl<<"Cuantos boletos ordinarios fueron vendidos?"<<endl;
    cin>>val_ord_qa;
    cout<<"Cuantos boletos para la tercera edad fueron vendidos?"<<endl;
    cin>>val_old_qa;
    cout<<"Cuantos boletos para estudiantes fueron vendidos?"<<endl;
    cin>>val_std_qa;
    cout<<"Cuantos boletos para la fuerza publica fueron vendidos?"<<endl;
    cin>>val_pub_qa;

    int val_qa = val_ord_qa + val_std_qa + val_pub_qa + val_old_qa;
    int val_value = val_ord_qa*val_price_ord + val_std_qa*val_price_std + val_pub_qa*val_price_pub + val_old_qa*val_price_old;

    cout<<"Para un total de "<<val_qa<<" boletos vendidos en el horario valle."<<endl<<"Para un total recaudado de $"<<val_value<<endl;

    int rush_price_old = reg_price_old*1.15;
    int rush_price_std = reg_price_std*1.15; 
    int rush_price_pub= reg_price_pub*1.15;
    int rush_price_ord = reg_price_ord*1.15;

    int rush_old_qa,rush_ord_qa,rush_pub_qa,rush_std_qa;

    cout<<"Respecto a la venta de boleteria en el horario pico."<<endl<<"Cuantos boletos ordinarios fueron vendidos?"<<endl;
    cin>>rush_ord_qa;
    cout<<"Cuantos boletos para la tercera edad fueron vendidos?"<<endl;
    cin>>rush_old_qa;
    cout<<"Cuantos boletos para estudiantes fueron vendidos?"<<endl;
    cin>>rush_std_qa;
    cout<<"Cuantos boletos para la fuerza publica fueron vendidos?"<<endl;
    cin>>rush_pub_qa;

    int rush_qa = rush_ord_qa + rush_std_qa + rush_pub_qa + rush_old_qa;
    int rush_value = rush_ord_qa*rush_price_ord + rush_std_qa*rush_price_std + rush_pub_qa*rush_price_pub + rush_old_qa*rush_price_old;

    cout<<"Para un total de "<<rush_qa<<" boletos vendidos en el horario pico."<<endl<<"Para un total recaudado de $"<<rush_value<<endl;
    
    int ticket_qa = rush_qa + val_qa + reg_qa;
    int ord_qa = reg_ord_qa + val_ord_qa + rush_ord_qa;
    int old_qa = reg_old_qa + val_old_qa + rush_old_qa;
    int pub_qa = reg_pub_qa + val_pub_qa + rush_pub_qa;
    int std_qa = reg_std_qa + val_std_qa + rush_std_qa;

    

    cout<<"La cantidad total de boletos vendidos es de "<<ticket_qa<<". De esto, vemos que se vendieron a lo largo del dia "<<ord_qa<<" boletos ordinarios, "<<old_qa<<" boletos para mayores, "<<pub_qa<<" boletos para la fuerza publica y "<<std_qa<<" boletos para estudiantes."<<endl;
    
    int ticket_value = rush_value + reg_value + val_value;
    int bus_driver_sal = bus_drive + (distance*500);
    int bus_cost = bus_driver_sal + bus_diesel;

    cout<<"Lo recaudado a lo largo del dia en venta de ticketes es de $ "<<ticket_value<<" . Mientras que lo se gasto fue de $ "<<bus_cost<<", tras un pago de $"<<bus_driver_sal<<" para el conductor por la bonificacion por distancia recorrida en "<<distance<<" km mas su salario base, y mas el gasto de $ "<<bus_diesel<<" en gasolina"<<endl;

    float earning = ticket_value - bus_cost;
    float earning_percent = ( bus_cost / earning )*100;    


    cout<<"Con esto, nos encontramos con que la ganancia total fue de $ "<<earning<<" , lo que corresponde porcentualmente a "<<earning_percent<<"%."<<endl;


    return 0;
}