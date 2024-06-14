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
    string edad;
    vector<string> notasGenerales;

    public:
    // Constructores para las clases
    Paciente();
    Paciente(string nombre, string edad);
    // Métodos auxiliares
    void imprimirPaciente();
};

#endif
