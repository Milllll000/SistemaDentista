/**
 * Implementación de la clase de Cita
 * 
 * Autor: Allan Mauricio Brenes castro
 * 
 * Fecha de creación: 11/06/2024
*/

#include "Cita.h"
#include "Paciente.h"

using namespace std;

Cita::Cita(Paciente paciente, string tratamientoDental, string fecha)
{
    this->paciente = paciente;
}