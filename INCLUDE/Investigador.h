
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
		vector<Publicacion*> publicaciones;
	public:
        	Investigador(const string& ORCID_, const string& nombre_, const string& institucion_);
       	 	~Investigador();
		void setOrcid(string Orcid);
    		void setNombre(string Nombre);
    		void setInstitucion(string Institucion);
		string getOrcid();
		string getNombre();
		string getInstitucion();
		string toString();
		vector<string> ListarPublicaciones(DTFecha desde, string palabra);
		void agregarPublicacion(Publicacion* pub);
};
    string toString(){};
    vector<string> ListarPublicaciones(DTFecha desde, string palabra){}

#endif
