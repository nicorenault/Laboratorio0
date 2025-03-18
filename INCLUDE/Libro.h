

#ifndef LIBRO
#define LIBRO

#include "Publicacion.h"
#include <string>

using namespace std;

class Libro : public virtual Publicacion{
	private:
		string Editorial;
	public:
	Libro();
	Libro(const string& Editorial_);
  	virtual ~Libro();	
	virtual bool ContienePalabra(string Palabra);
//string PalabrasDestacadas();?
};
#endif