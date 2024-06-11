/**
 * Declaración de la clase de Dentista
 * 
 * Autor: Allan Mauricio Brenes castro
 * 
 * Fecha de creación: 08/06/2024
*/

#include "Cita.h"

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
    Dentista();
    void crearCita(Paciente paciente);
    void setTratamientoDental(Cita cita, string tratamiento);
    void cancelarCita(Cita cita);
    void agregarPaciente();
    void imprimirPacientes();
    void setNombrePaciente(Paciente paciente);
    void agregarTratamientoAnterior(Paciente paciente);
    void agregarAlergia(Paciente paciente, string alergia);
    void agregarNotasGenerales(Paciente paciente);
    void borrarPaciente(Paciente paciente);
};