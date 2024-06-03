#include<iostream>

using namespace std; 

int main () {
    
    float value , temp;
    string scale;
    
    cout<<"Ingrese el valor de la temperatura.";
    cin>>value;
    cout<<"Esta expresada en: A. Celsius. B. Farenheit.";
    cin>>scale;
    
    if (scale == "a" or scale == "A" ) {
        temp = (value * 1.8) + 32;
        cout<<"La temperatura es "<<temp<<" ° Farenheit";
    }
    if (scale == "b" or scale == "B") { 
        temp = (value - 32) * 5/9;
        cout<<"La temperatura es "<<temp<<" ° Celsius";
    }
        
    return 0;
}
