/**
 * Prueba de todas las clases y funciones en el programa SistemaDeCitas.exe
 * 
 * Autor: Allan Mauricio Brenes castro
 * 
 * Fecha de creación: 08/06/2024
 * Fecha de última modificación: 12/06/2024
*/

#include "Paciente.h"
#include "Dentista.h"
#include "Cita.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(int argc, char const *argv[])
{
     // Prueba de la clase Dentista
     Dentista dentista;

    /**
     * El valor por default es que no hayan pacientes. Si es que no hay pacientes, se
     * mostrará en pantalla "No tiene pacientes por el momento."
    */
    dentista.imprimirPacientes();

    /**
     * Si se implementó correctamente, al ingresar "s" en la primera pregunta, te
     * permitirá agregar un paciente; si se deja vacío, se saldrá de la función.
    */
    /**
     * Si está bien implementada, al agregar en nombre "paciente x" y en edad "x", donde
     * x es un valor que va a aumentado en cada iteración, y se imprimirá el valor
     * ingresado
     */
    dentista.agregarPaciente();

    /**
     * Una vez haya pacientes, se imprimirán los pacientes adecuadamente en formato...
     * Indice "número de índice"
     * Nombre: "nombre del paciente"
     * Edad: "Edad del paciente"
    */
    dentista.imprimirPacientes();
    
    /**
     * Si está implementado correctamente, se debería de imprimir:
     * Fecha de la cita: "13/06/2024"
     * Datos del paciente: "Datos ingresados"
     * Tratamiento a realizar: "Extirpación de muelas del juicio"
    */

    /**
     * Si está bien implementada, al imprimir cita_1 se deberá imprimir los datos
     * de la cita así:
     * Fecha de la cita: 13/06/2024
     * Datos del paciente: "Datos asignados"
     * Tratamiento a realizar: extirpación de muelas del juicio
    */
    vector<Paciente> pacientes = dentista.getPacientes();
    Cita cita_1(pacientes[0], "Extirpación de muelas del juicio", "13/06/2024");
    cita_1.imprimirCita();
    
    /**
     * Como son los mismos datos que el caso de prueba anterior, se deberá de 
     * mostrar en pantalla datos similares.
    */
    dentista.crearCita();

    return 0;

    /**
     * La siguiente función muestra todas las citas del dentista.
     * Si no hay citas, mostrará en pantalla "No tiene citas agendadas."
     * Si hay citas, se imprimirá una por una junto con sus datos relacionados
    */
   dentista.imprimirCitas();

   /**
    * El método seleccionarPaciente() regresa un paciente individual
    * para su uso cuando se le pregunta al usuario cuál desea.
    * Si está bien implementada, al usar el método imprimirPaciente() se desplegarán
    * sus datos.
   */
   cout << "\nSeleccionarPaciente()" << endl;
   Paciente pacienteSeleccionado = dentista.seleccionarPaciente();
   pacienteSeleccionado.imprimirPaciente();

   return 0;
}