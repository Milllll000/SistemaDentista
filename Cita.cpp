/**
 * Implementación de la clase de Cita
 * 
 * Autor: Allan Mauricio Brenes castro
 * 
 * Fecha de creación: 11/06/2024
*/

#include "Cita.h"
#include "Paciente.h"

#include <iostream>

using namespace std;

Cita::Cita(Paciente paciente, string tratamientoDental, string fechaDeCita)
{
    this->paciente = paciente;
    this->tratamientoDental = tratamientoDental;
    this->fechaDeCita = fechaDeCita;
}

void Cita::imprimirCita()
{
    cout << "Fecha de la cita: " << fechaDeCita << endl;
    cout << "Datos del paciente: " << endl;
    paciente.imprimirPaciente();
    cout << "Tratamiento a realizar: " << tratamientoDental << endl;
}
