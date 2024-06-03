#Sebastian Dario Perez Pantoja

import random

def generar_partidos(equipo_local, equipo_visita, goles_local, goles_visita, num_equipos):
    num_partidos = 0
    for i in range(num_equipos):
            for j in range(num_equipos):
                if i != j: 
                    equipo_local.append(i)
                    equipo_visita.append(j)
                    goles_local.append(random.randint(0, 5))
                    goles_visita.append(random.randint(0, 5))
                    num_partidos += 1

def calcular_puntos(equipo_local, equipo_visita, goles_local, goles_visita, total_puntos, num_partidos):
    for i in range(10):
        total_puntos.append(0)
        
    for i in range(90):    
        if goles_local[i] > goles_visita[i]:
            total_puntos[equipo_local[i]] = total_puntos[ equipo_local[i]] +3 
        elif goles_local[i] < goles_visita[i]:
            total_puntos[equipo_visita[i]] = total_puntos[equipo_visita[i]] + 3
        else:
            total_puntos[equipo_local[i]] = total_puntos[ equipo_local[i]] +1
            total_puntos[equipo_visita[i]] = total_puntos[equipo_visita[i]] + 1
            
def calcular_campeon(total_puntos, num_equipos):
    max_puntos = 0
    for i in range(num_equipos):
        if total_puntos[i]>  max_puntos:
            max_puntos = total_puntos[i]
            indice = i

        return indice

def print_puntos_totales(equipos, total_puntos, num_equipos):
    for i in range (len(equipos)):
        print(f"{equipos[i]} obtuvo {total_puntos[i]}")

random.seed(1234)
equipos = ["Junior", "Millonarios", "Santafé", "Nacional", "Medellín", "Bucaramanga", "Pasto" ,"Alianza", "Huila", "Tolima"]
num_equipos = 10
num_partidos = []
equipo_local = []
equipo_visita = []
goles_local = []
goles_visita = []
total_puntos = []
    
generar_partidos(equipo_local, equipo_visita, goles_local, goles_visita, num_equipos)
calcular_puntos(equipo_local, equipo_visita, goles_local, goles_visita, total_puntos, num_partidos)
campeon = calcular_campeon(total_puntos, num_equipos)
    
print_puntos_totales(equipos, total_puntos, num_equipos)
print("El ganador del campeonato es",equipos[campeon],"con",total_puntos[campeon],"puntos.")
