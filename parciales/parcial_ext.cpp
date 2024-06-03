//Sebastian DArio Perez Pantoja

#include<iostream>
#include<cstdlib> 
#include<ctime>
#include<string>

using namespace std;

void generar_partidos(int equipo_local[], int equipo_visita[], int goles_local[], int goles_visita[], int num_equipos) {
    int num_partidos = 0;
    for (int i = 0; i < num_equipos; i++) {
        for (int j = 0; j < num_equipos; j++) {
            if (i != j) {
                equipo_local[num_partidos] = i;
                equipo_visita[num_partidos] = j;
                goles_local[num_partidos] = rand() % 6;
                goles_visita[num_partidos] = rand() % 6;
                num_partidos++;
            }
        }
    }
}

void calcular_puntos(int equipo_local[], int equipo_visita[], int goles_local[], int goles_visita[], int total_puntos[], int num_partidos) {
    for (int i = 0; i < num_partidos; i++) {
        if (goles_local[i] > goles_visita[i]) {
            total_puntos[equipo_local[i]] += 3;
        } else if (goles_local[i] < goles_visita[i]) {
            total_puntos[equipo_visita[i]] += 3; 
        } else if (goles_local[i] == goles_visita[i]) {
            total_puntos[equipo_local[i]] += 1;
            total_puntos[equipo_visita[i]] += 1; 
        }
    }
}

int calcular_campeon(int total_puntos[], int num_equipos) {
    int max_puntos = total_puntos[0];
    int max_i = 0;
    for (int i = 0; i < num_equipos; i++) {
        if (total_puntos[i] > max_puntos) {
            max_puntos = total_puntos[i];
            max_i = i;
        }
    }
    return max_i;
}

void print_puntos_totales(string equipos[], int total_puntos[], int num_equipos) {
    for (int j = 0; j < num_equipos; j++) {
        cout << equipos[j] << " : " << total_puntos[j] << " puntos" << endl;
    }
}

int main() {
    srand(1234);
    string equipos[] = {"Junior", "Millonarios", "Santafé", "Nacional", "Medellín", "Bucaramanga", "Pasto", "Alianza", "Huila", "Tolima"};
    int num_equipos = 10;
    int num_partidos = (num_equipos * (num_equipos - 1)); 
    int equipo_local[90]; 
    int equipo_visita[90];
    int goles_local[90];
    int goles_visita[90];
    int total_puntos[10]; 

    generar_partidos(equipo_local, equipo_visita, goles_local, goles_visita, num_equipos);
    calcular_puntos(equipo_local, equipo_visita, goles_local, goles_visita, total_puntos, num_partidos);
    int campeon = calcular_campeon(total_puntos, num_equipos);

    print_puntos_totales(equipos, total_puntos, num_equipos);
    cout << "El ganador del campeonato es " << equipos[campeon] << " con " << total_puntos[campeon] << " puntos." << endl;

    return 0;
}
