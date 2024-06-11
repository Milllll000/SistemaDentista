/**
 * Implementación de la clase de Paciente
 * 
 * Autor: Allan Mauricio Brenes castro
 * 
 * Fecha de creación: 08/06/2024
*/

#include "Paciente.h"

#include <iostream>

using namespace std;

// Cuando es un paciente nuevo que no ha tenido algún tratamiento con ningún dentista
Paciente::Paciente(string nombre, int edad)
{
    this->nombre = nombre;

    this->edad = edad;
}

// Cuando es un paciente nuevo que ha tenido tratamientos anteriores con algún dentista
Paciente::Paciente(string nombre, int edad)
{
    this->nombre = nombre;

    this->edad = edad;

    this->dentista = dentista;
}

void Paciente::imprimirPaciente()
{
    cout << "Nombre: " << nombre << endl;
    
    cout << "Edad: " << edad << endl;

    cout << "Dentista: " << dentista.getDentista() << endl;
    
    cout << "Alergias: " << endl;
    for(int i = 0; i < alergias.size(); i++)
    {
        cout << "\t" << alergias[i] << endl;
    }

    cout << "Tratamientos anteriores: " << endl;
    for(int i = 0; i < tratamientosAnteriores.size(); i++)
    {
        cout << "\t" << tratamientosAnteriores[i] << endl;
    }
}
