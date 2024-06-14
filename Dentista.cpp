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

void Dentista::crearCita()
{
    string input;
    int indice;
    Paciente pacienteSeleccionado;
    cout << "Ingrese el num de indice del paciente: " << endl;
    imprimirPacientes();
    getline(cin, input);
    indice = stoi(input);
    pacienteSeleccionado = getPacientes()[indice];

    string tratamientoDental;
    string fechaDeCita;
    cout << "Ingrese el tratamiento a realizar: ";
    getline(cin, tratamientoDental);
    cout << "Ingrese la fecha de la cita: ";
    getline(cin, fechaDeCita);
    Cita cita(pacienteSeleccionado, tratamientoDental, fechaDeCita);
    citas.push_back(cita);
    cout << "Cita creada." << endl;
    cita.imprimirCita();
}

void Dentista::imprimirCitas()
{
    for(int i = 0; i < citas.size(); i++)
    {
        citas[i].imprimirCita();
    }
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
                cout << "Indice " << to_string(i) << endl;
                pacientes[i].imprimirPaciente();
        }
    cout << "\n";
    }
}

vector<Paciente> Dentista::getPacientes()
{
    return pacientes;
}
