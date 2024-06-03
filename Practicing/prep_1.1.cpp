#include<iostream>
using namespace std;

bool prime(int a){
    int h = 2;
    while (a % h != 0){
        h ++;
    }
    if (h == a){
        return true;
    }
    else{
        return false;
    }
}
int gen_prime(){
    bool prime_gen = false;
    while (prime_gen != true){
        int fq = rand() % 1000;
        if (prime(fq) == true){
            prime_gen = true;}
    return fq; 

    }
    
}

int gen_num (int id_art_gen){
    int num_generate;
    if (id_art_gen == 0){
        gen_prime();}
    if (id_art_gen == 1){
        num_generate = rand () % 500 * 2;
    }
    else if (id_art_gen == 2){
        num_generate = ((rand () % 500 )* 2) - 1;
    }
    return num_generate;
}

void contenido(int num_canciones, int duracion, int id_artista){
    int info[num_canciones][3];
    int promedio = 0;

    for(int i = 0 ; i < num_canciones; i++){
        for(int j = 0; j < 3;j++){
            //1 Correspondera a numero de cancion.
            if (j == 0){
            info[i][j] = i + 1;                
            }
            //2 Correspondera a duracion de la cancion.

            else if (j == 1) {
                info[i][j] = rand () % duracion;
            }
            // 3 Corresponde al ID del Artista.
            else if (j == 2) {
                info[i][j] = gen_num (id_artista);
            }
        }   
    }
    for(int h = 0; h < num_canciones; h++){
            cout<<"Cancion: "<<info[h][0]<<" "<<"Duracion de la cancion: "<<info[h][1]<<" Id del Artista: "<<info[h][2]<<endl;
    }
    for(int prom = 0 ; prom < num_canciones; prom ++){
        int d_can =+ info[prom][1];
        promedio += d_can;
    }
    cout<<"El total de segundos es "<<promedio<<"\nEl promedio en segundo: "<<promedio/num_canciones<<endl;

}

void album (int a){
//Categorias. Album.
    if (prime(a) == true){
        contenido (13,660,0);
    }
    else{
        if (a % 2 == 0){
            contenido (10,240,1);//pares.
        }
        else{
            contenido (7,420,2);//impares. 
        }
    }
}

int main () {
    int id_album_input;
    cout<<"Inserte el numero de album."<<"\n";
    cin>>id_album_input;
    album (id_album_input);
    return 0;
}