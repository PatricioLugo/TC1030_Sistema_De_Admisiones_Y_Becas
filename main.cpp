/*
*
* Proyecto Sistema de Admisiones y Becas
* Patricio Lugo Albor 
* A01707192
* 11/6/2024
* version: 3
* Este es un proyecto para la clase TC1030.301 Programación
* Orientada a Objetos. El programa consiste en un sistema de
* registro de admisiones y becas para una institución educativa,
* donde los posibles prospectos son evaluados para determinar
* si pueden entrar a la institución y si son acredores a una
* beca.
*/

#include <bits/stdc++.h> // Biblioteca que incluye la mayoría del contenido
                         // de las bibliotecas estándar de c++
#include <iostream> // Biblioteca que incluye operadores de entrada y salida

#include "prospecto.h" // Biblioteca con los objetos a usar de la clase Prospecto
                       // y sus clases heredadas

#include "admisiones.h" // Biblioteca con los objetos a usar de la clase Admisiones

using namespace std;

int main(int argc, char * argv[]){

    Admisiones admisiones;
    admisiones.crear_prospecto();
    admisiones.mostrar_prospectos();
    admisiones.mostrar_prospectos("Profesional");
};