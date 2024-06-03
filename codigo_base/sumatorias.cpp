#include <iostream>

using namespace std;

int main()
{   
    int pos_min ,  pos_max, num_max , num_min;
    srand(1234);
    int sum_imp;
    int sum_otra;
    int v[15];
    for(int i = 0; i < 15; i ++){
        v[i] = rand() % 100;
        cout<<i<<"."<<v[i]<<endl;
    }
    for(int i = 1; i < 15; i += 2 ){
        sum_imp += v[i];
    }
    cout<<sum_imp<<endl;
    for(int i = 0; i < 15 ; i ++){
        if (v[i] % 2 != 0){
            sum_otra += v[i];
        }
    } 
    
    // Funcion.
            num_max = 0;
        num_min = 1000;

    for(int i = 0 ; i < 15 ; i ++) {
        if (num_max < v[i]) {
            num_max = v[i];
            pos_max = i;}
        if (num_min > v[i]){
            num_min = v[i];
            pos_min = i;
        }
        };
        
    
    cout<<"Pos min"<<pos_min<<endl<<"Num min"<<num_min<<endl;
    cout<<pos_max<<"pos_max"<<endl<<"num_max"<<num_max<<endl;
    
    cout<<sum_otra;
    return 0;
}
