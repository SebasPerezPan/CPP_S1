#include<iostream>

using namespace std;

void prime (int i) {
    int d = 2;
    while (i % d != 0) {
        d ++;
    }
    if (i == d) {
        cout<<i<<" Es primo.";
    }
}
void prime_range(int i,int j) {
    for (int i = 0; i<j; i++){
        prime(i);
    }
}

int main() {

    cout<<"Hola we"<<endl;
    prime(3);
    return 0;
}