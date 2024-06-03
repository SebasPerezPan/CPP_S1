#include<iostream>

using namespace std;

void generar_partidos(int equipo_local [], int equipo_visita[],int goles_local[], int goles_visita[], int total_puntos, int num_partidos){
int cont = 0;  
for(int i =0 ; i < num_equipos; i ++){
        for(int j=0; j< num_equipos; j++){
          if (i != j){
              equipo_local[cont] = i;
              equipo_visita[cont] = j;
              goles_local[cont] = rand() % 6;
              goles_visita[cont] = rand() % 6;
              cont++;
          }
        }
  }

}

void calcular_puntos(int equipo_local [], int equipo_visita[],int goles_local[], int goles_visita[], total_puntos, num_partidos){
  for(int i =0 ; i< num_partidos; i++){
    if(goles_local[i] > goles_visita[i]){
      total_puntos[equipo_local[i]] += 3;
    }
    else if(goles_local[i] < goles_visita[i]){
      total_puntos[equipo_visita[i]] += 3;
    }
  }


}

int calcular_campeon(total_puntos, num_equipos){
  int max = total_puntos[0];
  int max_i
}

void print_puntos_totales(string equipos[], int total_puntos [], int num_equipos[]){
  for(int i = 0; i < num_equipos; i++){
    
}
}

int main()
{
    srand(1234);
    string equipos[] = {"Junior", "Millonarios", "Santafé", "Nacional", "Medellín", "Bucaramanga", "Pasto" ,"Alianza", "Huila", "Tolima"};
    int num_equipos = 10;
    int num_partidos; //Calcular este número a partir del número de equipos
    int equipo_local[<Inserte la dimensión adecuada>];
    int equipo_visita[<Inserte la dimensión adecuada>];
    int goles_local[<Inserte la dimensión adecuada>];
    int goles_visita[<Inserte la dimensión adecuada>];
    int total_puntos[<Inserte la dimensión adecuada>];
    
    generar_partidos(equipo_local, equipo_visita, goles_local, goles_visita, num_equipos);
    calcular_puntos(equipo_local, equipo_visita, goles_local, goles_visita, total_puntos, num_partidos);
    int campeon = calcular_campeon(total_puntos, num_equipos);
    
    print_puntos_totales(equipos, total_puntos, num_equipos);
    cout<<"El ganador del campeonato es "<<equipos[campeon]<<" con "<<total_puntos[campeon]<<" puntos."<<endl;
    
    return 0;
}
