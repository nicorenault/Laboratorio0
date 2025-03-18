
#ifndef PAGINAWEB
#define PAGINAWEB

#include "Publicacion.h"
#include <string>
using namespace std;
class PaginaWeb : public virtual Publicacion{
	private:
		string url;
		string ContenidoExtraido;
	public:
        PaginaWeb();
        PaginaWeb(const string& url_, const string& ContenidoExtraido_);   
        virtual ~PaginaWeb(); 

	    virtual bool ContienePalabra(const string& Palabra);
};
#endif