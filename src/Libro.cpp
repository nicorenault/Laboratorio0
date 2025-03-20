#include "Libro.h"
#include <iostream>

// Constructor
Libro::Libro(string& doi, string& titulo, string& fecha, string& editorial, vector<string>& palabrasClave)
    : Publicacion(doi, titulo, fecha), Editorial(editorial), PalabrasClave(palabrasClave) {}

// Destructor
Libro::~Libro() {}

// Getters
string Libro::getEditorial(){ 
    return Editorial; 
}

vector<string> Libro::getPalabrasClave(){ 
    return PalabrasClave; 
}

// Setters
void Libro::setEditorial(string& editorial) { 
    this->Editorial = editorial; 
}

void Libro::setPalabrasClave(vector<string>& palabrasClave) { 
    this->PalabrasClave = palabrasClave; 
}

//Funciones

bool Libro::contienePalabra(string s){
    return find(PalabrasDestacadas.begin(), PalabrasDestacadas.end(), s) != PalabrasDestacadas.end();
}
