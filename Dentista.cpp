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

// Crea una cita y la mete dentro del vector de citas del dentista
void Dentista::crearCita()
{
    // Inicialización de variables
    // Para el input del usuario
    string input;
    // El paciente quien recibirá la atención en la cita
    Paciente pacienteSeleccionado;
    
    /*Se selecciona el paciente que recibirá la atención. Se muestra en pantalla
    todos los pacientes junto con sus índices. De ahí el usuario ingresa el índice
    del paciente. Luego se busca dentro de los pacientes el que se encuentre
    en ese índice y se almacena en pacienteSeleccionado.*/
    cout << "Ingrese el num de indice del paciente: " << endl;
    imprimirPacientes();
    getline(cin, input);
    int indice;
    indice = stoi(input);
    pacienteSeleccionado = pacientes[indice];

    /*Se pregunta al usuario los datos del tratamiento y de la fecha para poder crear
    un objeto de la clase Cita. Una vez preguntados, se almacenan en sus respectivas
    variables declaradas.*/
    string tratamientoDental;
    string fechaDeCita;
    cout << "Ingrese el tratamiento a realizar: ";
    getline(cin, tratamientoDental);
    cout << "Ingrese la fecha de la cita: ";
    getline(cin, fechaDeCita);

    // Se crea el objeto con los atributos ya pedidos por el usuario
    Cita cita(pacienteSeleccionado, tratamientoDental, fechaDeCita);

    // Se almacena en el vector de citas de la clase dentista
    citas.push_back(cita);
    cout << "Cita creada." << endl;

    // Se imprime la cita como retroalimentación visual para el usuario
    cita.imprimirCita();
}

/**
 * Se imprimen todas las citas almacenadas por el dentista. Si no hay cita, muestra
 * un mensaje de error y se sale de la función.
*/
void Dentista::imprimirCitas()
{
    if(citas.size() == 0)
    {
        cout << "No tiene citas agendadas. " << endl;
    }

    else
    {
        for(int i = 0; i < citas.size(); i++)
        {
            citas[i].imprimirCita();
        }
    }
}

// Esta función permite crear un paciente y agregarlo al vector de pacientes del
// dentista
void Dentista::agregarPaciente()
{
    // Iniciación de variables para instanciar una clase
    string nombre;
    string edad;
    string input;

    do
    {
        // Confirmación para agregar un paciente
        cout << "Desea agregar un paciente? \"s\" para si, \"n\" para no." << endl;
        getline(cin, input);
        if(input == "s")
        {
            // Se pide ingresar el nombre del paciente
            cout << "Ingrese el nombre del paciente: ";
            getline(cin, nombre);
            // Se pide ingresar la edad del paciente
            cout << "Ingrese la edad del paciente: ";
            getline(cin, edad);

            // Se crea un objeto de la clase Paciente. Posteriormente, se agrega al vector
            Paciente paciente(nombre, edad);
            pacientes.push_back(paciente);

            // Confirmación visual de que se ha creado el paciente
            cout << "Paciente agregado. " << endl;
            paciente.imprimirPaciente();
        }
        // Si no se ingresa uno de los valores permitidos, se muestra un error y se repite
        // el loop
        else if(input != "s" && input != "n")
        {
            cout << "Ingrese un valor correcto." << endl;
        }
    } while(input != "n");
}

// Función para imprimir todos los pacientes guardados del dentista.
void Dentista::imprimirPacientes()
{
    // Si no hay pacientes, muestra un mensaje de error y se sale de la función.
    if(pacientes.size() == 0)
    {
        cout << "No tiene pacientes por el momento. " << endl;
    }
    else
    {
        // Por cada paciente, se imprime el índice del paciente, y posteriormente se
        // imprimen los datos
        for(int i = 0; i < pacientes.size(); i++)
        {
                cout << "Indice " << to_string(i) << endl;
                pacientes[i].imprimirPaciente();
        }
    cout << "\n";
    }
}

// Método get para el vector de pacientes
vector<Paciente> Dentista::getPacientes()
{
    return pacientes;
}
