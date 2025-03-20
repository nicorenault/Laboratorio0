#include "ArticuloRevista.h"

// Constructor con parámetros
ArticuloRevista::ArticuloRevista(const string& r, const string& e){
    Revista = r;
    Extracto = e; 
}

// Destructor
ArticuloRevista::~ArticuloRevista() {
}

// Setters
void ArticuloRevista::setRevista(string r) {
    this->Revista = r;
}

void ArticuloRevista::setExtracto(string e) {
    this->Extracto = e;
}

// Getters
string ArticuloRevista::getRevista() {
    return Revista;
}

string ArticuloRevista::getExtracto() {
    return Extracto;
}

// Método para verificar si el extracto contiene una palabra
bool ArticuloRevista::ContienePalabra(const string& palabra) {
    size_t pos = 0, found;
    while ((found = this->Extracto.find(' ', pos)) != string::npos) { //find busca los espacios
        if (this->Extracto.substr(pos, found - pos) == palabra) { // substr extrae la palabra que se encuentra entre pos y found
            return true; // la palabra coincide
        }
        pos = found + 1; // se mueve al siguiente caracter despues del espacio
    }
    return (this->Extracto.substr(pos) == palabra); // ultima palabra
}
