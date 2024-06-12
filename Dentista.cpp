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
    string edad;
    string input;

    do
    {
        cout << "Desea agregar un paciente? \"s\" para si, \"n\" para no." << endl;
        getline(cin, input);
        if(input == "s")
        {
            cout << "Ingrese el nombre del paciente: ";
            getline(cin, nombre);

            cout << "Ingrese la edad del paciente: ";
            getline(cin, edad);

            Paciente paciente(nombre, edad);

            pacientes.push_back(paciente);

            cout << "Paciente agregado. " << endl;
            paciente.imprimirPaciente();
        }
        else if(input != "s" && input != "n")
        {
            cout << "Ingrese un valor correcto." << endl;
        }
    } while(input != "n");
}

// Función para imprimir todos los pacientes guardados del dentista
void Dentista::imprimirPacientes()
{
    if(pacientes.size() == 0)
    {
        cout << "No tiene pacientes por el momento. " << endl;
    }
    else
    {
        for(int i = 0; i < pacientes.size(); i++)
        {
                pacientes[i].imprimirPaciente();
        }
    cout << "\n";
    }
}
