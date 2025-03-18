
#ifndef INVESTIGADOR
#define INVESTIGADOR

#include "Publicacion.h"
#include "DTFecha.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Investigador{
	private:
		string ORCID, nombre, institucion;
	public:
        Investigador(const string& ORCID_, const string& nombre_, const string& institucion_);
        ~Investigador();
		string toString();
		string ListarPublicaciones(DTFecha desde, string palabra);
};
    string toString(){};
    string ListarPublicaciones(DTFecha desde, string palabra){}

#endif