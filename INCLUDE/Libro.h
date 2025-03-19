

#ifndef LIBRO
#define LIBRO

#include "Publicacion.h"
#include <string>
#include <vector>

using namespace std;

class Libro : public virtual Publicacion{
	private:
		string Editorial;
		vector<std::string> PalabrasDestacadas;
	public:
	Libro();
	Libro(const string& Editorial_; vector<std::string> PalabrasDestacadas);
  	virtual ~Libro();
	void setEditorial(string editorial);
    	void setPalabrasDestacadas(string PalabrasDestacadas);
    	string getEditorial();
	string getPalabrasDestacadas();
	virtual bool ContienePalabra(string Palabra);
};
#endif
