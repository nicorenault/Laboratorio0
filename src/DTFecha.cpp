#include "DTFecha.h"

DTFecha::DTFecha(int d, int m, int a) {
    dia = d;   
    mes = m;
    anio = a;
}

// Getters
int DTFecha::getDia() const {
    return dia;
}

int DTFecha::getMes() const {
    return mes;
}

int DTFecha::getAnio() const {
    return anio;
}
 
// Método toString para representar la fecha como string
string DTFecha::toString() const {
    ostringstream oss;
    oss << dia << "/" << mes << "/" << anio;
    return oss.str();
}

// Operador de comparación '>'
bool DTFecha::operator>(const DTFecha& otra) const {
    if (anio > otra.anio) return true;
    if (anio == otra.anio && mes > otra.mes) return true;
    if (anio == otra.anio && mes == otra.mes && dia > otra.dia) return true;
    return false;
}
