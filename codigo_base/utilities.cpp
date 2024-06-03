#include <iostream>
#include <vector>
#include <cmath>

double calcularDesviacionEstandar(const std::vector<double>& datos) {
    double media = 0.0;
    for (double dato : datos) {
        media += dato;
    }
    media /= datos.size();

    double sumatoria = 0.0;
    for (double dato : datos) {
        sumatoria += (dato - media) * (dato - media);
    }
    return sqrt(sumatoria / datos.size());
}

int main() {
    std::vector<double> datos = {2, 4, 4, 4, 5, 5, 7, 9};
    double desviacion_estandar = calcularDesviacionEstandar(datos);
    std::cout << "La desviación estándar es: " << desviacion_estandar << std::endl;
    return 0;
}