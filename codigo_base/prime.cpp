#include<iostream>

using namespace std;

int main()
{   
    
        int i , num ;
        for(int num = 2; num < 100; num ++){
            i = 2;
            while(num%i != 0) {
                i++;
            }
            if (i==num){
                cout<<"Es primo."<<num<<endl;
            }
            else{cout<<"No es primo."<<num<<endl;}}
    
    return 0 ;
}
