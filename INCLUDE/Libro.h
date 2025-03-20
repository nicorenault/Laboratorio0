

#ifndef LIBRO
#define LIBRO

#include "Publicacion.h"
#include <string>
#include <vector>

using namespace std;

class Libro : public virtual Publicacion{
	private:
		string Editorial;
		vector<std::string> PalabrasPalabrasClaves;
	public:
	Libro();
	Libro(string& Editorial_; vector<std::string> PalabrasPalabrasClave);
  	virtual ~Libro();
	void setEditorial(string editorial);
    	void setPalabrasPalabrasClave(string PalabrasPalabrasClave);
    	string getEditorial();
	string getPalabrasClave();
	virtual bool ContienePalabra(string Palabra);
};
#endif
