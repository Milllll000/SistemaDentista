/**
 * Función main para el sistema de citas
 * 
 * Autor: Allan Mauricio Brenes Castro
 * 
 * Fecha de creación: 07/06/2024
 * Fecha de última modificación: 08/06/2024
*/

#include "Paciente.h"
#include "Cita.h"
#include "Dentista.h"

#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string input;
    Dentista dentista;

    do
    {
        // Menú de inicio donde el usuario podrá elegir qué es lo que quiere hacer
        cout << "Bienvenido!" << endl;
        cout << "Para revisar su lista de pacientes, ingrese \"pacientes\"" << endl;
        cout << "Para agregar uno o varios pacientes a su lista, ingrese \"agregar\"" << endl;
        cout << "Para revisar sus citas, ingrese \"citas\"" << endl;
        cout << "Para agendar una cita, ingrese \"agendar\"" << endl;
        cout << "Para revisar los datos de un paciente, ingrese \"datos\"" << endl;
        cout << "Para agregar una nota a un paciente, ingrese \"nota\"" << endl;
        cout << "Para cerrar la aplicación, ingrese \"cerrar\"" << endl;
        getline(cin, input);
        if(input == "pacientes")
        {
            cout << "\n";
            dentista.imprimirPacientes();
            cout << "\n\n";
        }
        if(input == "agregar")
        {
            cout << "\n";
            dentista.agregarPaciente();
            cout << "\n\n";
        }
        if(input == "citas")
        {
            
        }
        if(input == "agendar")
        {
            
        }
        if(input == "datos")
        {
            
        }
        if(input == "nota")
        {
            
        }
    } while(input != "cerrar");
}