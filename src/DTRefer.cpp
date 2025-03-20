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

int DTRefer::getNumAutores() const { 
    return Autores.size(); 
}

// Sobrecarga del operador << para imprimir DTRefer
ostream& operator<<(ostream& os, const DTRefer& dt) {
    os << dt.DOI << " -> " << dt.Titulo << " (" << dt.Fecha << ") / ";
    for (size_t i = 0; i < dt.Autores.size(); ++i) {
        os << dt.Autores[i];
        if (i < dt.Autores.size() - 1) os << ", ";
    }
    return os;
}
