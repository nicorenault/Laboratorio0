#include "DTFecha.h"

DTFecha::DTFecha(int d, int m, int a) {
    dia = d;   
    mes = m;
    anio = a;
}

// Getters
int DTFecha::getDia(){
    return dia;
}

int DTFecha::getMes(){
    return mes;
}

int DTFecha::getAnio(){
    return anio;
}
 
// Método toString para representar la fecha como string
string DTFecha::toString(){
    ostringstream oss;
    oss << dia << "/" << mes << "/" << anio;
    return oss.str();
}

// Operador de comparación '>'
bool DTFecha::operator>(DTFecha& otra){
    if (anio > otra.anio) return true;
    if (anio == otra.anio && mes > otra.mes) return true;
    if (anio == otra.anio && mes == otra.mes && dia > otra.dia) return true;
    return false;
}
