/**
 * Implementación de la clase de Paciente
 * 
 * Autor: Allan Mauricio Brenes castro
 * 
 * Fecha de creación: 08/06/2024
 * Fecha de última modificación: 11/06/2024
*/

#include "Paciente.h"

#include <iostream>

using namespace std;

Paciente::Paciente()
{
    
}

// Cuando es un paciente nuevo, se agrega el paciente
Paciente::Paciente(string nombre, int edad)
{
    this->nombre = nombre;

    this->edad = edad;
}

void Paciente::imprimirPaciente()
{
    cout << "Nombre: " << nombre << endl;
    
    cout << "Edad: " << edad << endl;
}
