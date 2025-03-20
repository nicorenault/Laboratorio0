#include "DTRefer.h"

// Constructor
DTRefer::DTRefer(string& doi, string& titulo, string& fecha, vector<string>& autores){
    DOI = doi;
    Titulo = titulo; 
    Fecha = fecha;
    Autores = autores;
}

// Getters
string DTRefer::getDOI(){ 
    return DOI; 
}

string DTRefer::getTitulo(){ 
    return Titulo; 
}

string DTRefer::getFecha(){ 
    return Fecha; 
}

vector<string> DTRefer::getAutores(){ 
    return Autores; 
}

int DTRefer::getNumAutores(){ 
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
