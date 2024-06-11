/**
 * Declaración de la clase de Cita
 * 
 * Autor: Allan Mauricio Brenes castro
 * 
 * Fecha de creación: 08/06/2024
*/

#include <string>

class Cita
{
    // Atributos privados
    private:
    Paciente paciente;
    string tratamientoDental;
    string fechaDeCita;

    public:
    // Constructores
    Cita(Paciente paciente, string tratamientoDental, string fecha);
};