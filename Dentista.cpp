/**
 * Implementación de la clase Dentista
 * 
 * Autor: Allan Mauricio Brenes castro
 * 
 * Fecha de creación: 08/06/2024
*/

#include "Dentista.h"

#include <string>
#include <iostream>

using namespace std;

Dentista::Dentista()
{
    
}

void Dentista::crearCita(Paciente paciente)
{

}

void Dentista::agregarPaciente()
{
    string nombre;
    int edad;
    string alergias;
    string tratamientosAnteriores;

    cout << "Ingrese el nombre del paciente: ";
    getline(cin, nombre);

    cout << "Ingrese la edad del paciente: ";
    cin >> edad;

    Paciente paciente_1(nombre, edad);

    pacientes.push_back(paciente_1);

    cout << "Paciente agregado. " << endl;
    paciente_1.imprimirPaciente();
}
