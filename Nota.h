/**
 * Declaración de la clase de Nota
 * 
 * Autor: Allan Mauricio Brenes castro
 * 
 * Fecha de creación: 11/06/2024
 * Fecha de última modificación: 
*/

#ifndef _Nota_h
#define _Nota_h

#include "Paciente.h"

#include <string>

class Nota
{
    private:
    string nota;
    string fechaDeNota;

    public:
    Nota();
    Nota( string nota, string fecha);
    void crearNota( string nota, string fecha);
};


#endif