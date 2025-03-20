#include "Libro.h"
#include <iostream>

// Constructor
Libro::Libro(const string& doi, const string& titulo, const string& fecha, const string& editorial, const vector<string>& palabrasClave)
    : Publicacion(doi, titulo, fecha), Editorial(editorial), PalabrasClave(palabrasClave) {}

// Destructor
Libro::~Libro() {}

// Getters
string Libro::getEditorial() const { 
    return Editorial; 
}

vector<string> Libro::getPalabrasClave() const { 
    return PalabrasClave; 
}

// Setters
void Libro::setEditorial(const string& editorial) { 
    this->Editorial = editorial; 
}

void Libro::setPalabrasClave(const vector<string>& palabrasClave) { 
    this->PalabrasClave = palabrasClave; 
}
