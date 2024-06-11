/**
 * Declaración de la clase de Paciente
 * 
 * Autor: Allan Mauricio Brenes castro
 * 
 * Fecha de creación: 08/06/2024
 * Fecha de última modificación: 11/06/2024
*/

#ifndef _Paciente_h
#define _Paciente_h

#include <string>
#include <vector>

using namespace std;

class Paciente
{
    // Atributos privados
    private:
    string nombre;
    int edad;
    vector<string> tratamientosAnteriores;
    vector<string> alergias;
    vector<string> notasGenerales;

    public:
    // Constructores para las clases
    Paciente();
    Paciente(string nombre, int edad);
    // Función para imprimir un paciente
    void imprimirPaciente();
};

#endif
