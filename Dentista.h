/**
 * Declaración de la clase de Dentista
 * 
 * Autor: Allan Mauricio Brenes castro
 * 
 * Fecha de creación: 08/06/2024
 * Fecha de última modificación: 11/06/2024
*/

#ifndef _Dentista_h
#define _Dentista_h

#include "Cita.h"
#include "Paciente.h"

#include <string>
#include <vector>

using namespace std;

class Dentista
{
    private:
    vector<Paciente> pacientes;
    vector<Cita> citas;

    public:
    Dentista();
    void crearCita(Paciente paciente);
    void setTratamientoDental(Cita cita, string tratamiento);
    void cancelarCita(Cita cita);
    void agregarPaciente();
    void imprimirPacientes();
    void agregarNotasGenerales(Paciente paciente);
    void borrarPaciente(Paciente paciente);
};

#endif