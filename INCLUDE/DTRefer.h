#ifndef DTREFER
#define DTREFER
#include "DTFecha.h"
#include <string>
using namespace std;
class DTRefer {
    private:
        string doi;
        string titulo;
        DTFecha fecha;
        //autores set string creo que se refiere a un arreglo de strings de autores pero no estoy seguro
    public:
        DTRefer(const string& doi_, const string& titulo_, const DTFecha& fecha_);
        ~DTRefer();  
    
        string getDOI();
        string getTitulo();
        DTFecha getFecha();
        int getNumAutores();
  
    };
    
#endif