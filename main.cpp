#include <iostream>
#include <vector>
#include "DTFecha.h"
#include "ArticuloRevista.h"
#include "Libro.h"
#include "PaginaWeb.h"
#include "Investigador.h"
#include "DTRefer.h"

using namespace std;

int main() {
    // a. Crear objetos de ArticuloRevista
    ArticuloRevista* art1 = new ArticuloRevista(
        "10.1234/abc123", 
        "Fundamentos de POO", 
        DTFecha(15, 5, 2023), 
        "Programacion Avanzada", 
        "Introduccion a los principios fundamentales de la programacion orientada a objetos, explicando sus conceptos clave como clases, objetos, herencia y polimorfismo."
    );
}
