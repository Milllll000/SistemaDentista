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
#include "Nota.h"

#include <string>
#include <vector>

using namespace std;

class Dentista
{
    private:
    // Atributos privados
    vector<Paciente> pacientes;
    vector<Cita> citas;

    public:
    // Constructor por default
    Dentista();

    // Métodos auxiliares
    void crearCita();
    void imprimirNotas();
    void imprimirCitas();
    void agregarPaciente();
    void imprimirPacientes();
    void agregarNotasGenerales();
    Paciente seleccionarPaciente();
    vector<Paciente> getPacientes();
};

#endif