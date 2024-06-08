/**
 * Prueba de la clase Paciente
 * 
 * Autor: Allan Mauricio Brenes castro
 * 
 * Fecha de creación: 08/06/2024
*/

#include "Paciente.h"

#include <string>

int main(int argc, char const *argv[])
{
    // Si la prueba funciona, se imprimirá "Nombre: Jorge   Edad: 54    Alergias: Penicilina "
    Paciente jorge("Jorge", 54, "Penicilina", "Extirpacion de muelas del juicio");
    jorge.imprimirPaciente();
}