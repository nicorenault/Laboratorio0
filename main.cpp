#include <iostream>
#include "DTFecha.h"
#include "ArticuloRevista.h"
#include "Libro.h"
#include "PaginaWeb.h"
#include "Investigador.h"
#include "DTRefer.h"

using namespace std;

int main() {
    ArticuloRevista* art1 = new ArticuloRevista(
        "10.1234/abc123", 
        "Fundamentos de POO", 
        DTFecha(15, 5, 2023), 
        "Programacion Avanzada", 
        "Introduccion a los principios fundamentales de la programacion orientada a objetos, explicando sus conceptos clave como clases, objetos, herencia y polimorfismo."
    );
        ArticuloRevista* art2 = new ArticuloRevista(
        "10.4567/jkl012", 
        "Utilidad de diagramas UML", 
        DTFecha(10, 2, 2024), 
        "Modelado de Software", 
        "Ejercicio empirico de como los diagramas UML pueden ayudar en el proceso y documentacion de software, cubriendo los tipos mas importantes utilizados, como clases."
    );
}
