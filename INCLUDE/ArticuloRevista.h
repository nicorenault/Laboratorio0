#ifndef ARTICULOREVISTA
#define ARTICULOREVISTA

#include "Publicacion.h"
#include <string>
using namespace std;


class ArticuloRevista : Publicacion{
	private:
		string Revista;
		string Extracto;
	public:
		virtual bool ContienePalabra(string Palabra);
        ArticuloRevista(const string& Revista_, const string& Extracto_);
        virtual ~ArticuloRevista();        
};


#endif