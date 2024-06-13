/**
 * Declaración de la clase de Cita
 * 
 * Autor: Allan Mauricio Brenes castro
 * 
 * Fecha de creación: 08/06/2024
 * Fecha de última modificación: 11/06/2024
*/

#ifndef _Cita_h
#define _Cita_h

#include <string>
#include "Paciente.h"

class Cita
{
    // Atributos privados
    private:
    Paciente paciente;
    string tratamientoDental;
    string fechaDeCita;

    public:
    // Constructores
    Cita(Paciente paciente, string tratamientoDental, string fechaDeCita);

    // Métodos auxiliares
    void imprimirCita();
};
#endif