#include "DTRefer.h"

// Constructor
DTRefer::DTRefer(const string& doi, const string& titulo, const string& fecha, const vector<string>& autores){
    DOI = doi;
    Titulo = titulo; 
    Fecha = fecha;
    Autores = autores;
}

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
