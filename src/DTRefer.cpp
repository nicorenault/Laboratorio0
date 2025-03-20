#include "DTRefer.h"

// Constructor
DTRefer::DTRefer(const string& doi, const string& titulo, const string& fecha, const vector<string>& autores)
    : DOI(doi), Titulo(titulo), Fecha(fecha), Autores(autores) {}

// Getters
string DTRefer::getDOI() const { 
    return DOI; 
}

string DTRefer::getTitulo() const { 
    return Titulo; 
}

string DTRefer::getFecha() const { 
    return Fecha; 
}

vector<string> DTRefer::getAutores() const { 
    return Autores; 
}

// Setters
void DTRefer::setDOI(const string& doi) { 
    this->DOI = doi; 
}

void DTRefer::setTitulo(const string& titulo) { 
    this->Titulo = titulo; 
}

void DTRefer::setFecha(const string& fecha) { 
    this->Fecha = fecha; 
}

void DTRefer::setAutores(const vector<string>& autores) { 
    this->Autores = autores; 
}
