/**
 * Declaración de la clase de Paciente
 * 
 * Autor: Allan Mauricio Brenes castro
 * 
 * Fecha de creación: 08/06/2024
*/

#include "Dentista.h"
#include "Cita.h"

#include <string>
#include <vector>

using namespace std;

class Paciente
{
    // Atributos privados
    private:
    string nombre;
    int edad;
    Dentista dentista;
    vector<string> tratamientosAnteriores;
    vector<string> alergias;
    vector<string> notasGenerales;
    vector<Cita> citasAnteriores;

    public:
    // Constructores para las clases
    Paciente(string nombre, int edad);
    Paciente(string nombre, int edad);
    // Función prueba de constructores
    void imprimirPaciente();
};