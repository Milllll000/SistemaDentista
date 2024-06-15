/**
 * Implementación de la clase de Nota
 * 
 * Autor: Allan Mauricio Brenes castro
 * 
 * Fecha de creación: 11/06/2024
 * Fecha de última modificación: 
*/

#include "Nota.h"

#include <string>
#include <iostream>

using namespace std;

Nota::Nota()
{

}

Nota::Nota(string nota, string fechaDeNota)
{
    this->nota = nota;
    this->fechaDeNota = fechaDeNota;
}

void Nota::imprimirNota()
{
    cout << "Fecha: " << fechaDeNota << endl;
    cout << nota << endl;
}
