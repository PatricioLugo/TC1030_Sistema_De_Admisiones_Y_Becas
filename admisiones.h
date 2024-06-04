/*
*
* Proyecto Sistema de Admisiones y Becas
* Patricio Lugo Albor 
* A01707192
* 11/6/2024
* version: 3
* Esta clase define objeto de tipo Admisiones que contiene todas las operaciones
* para registrar prospectos y para determinar su posibilidad de beca y su estado
* de admisión. La función principal del programa utiliza esta clase.
*/

#ifndef ADMISIONES_H_
#define ADMISIONES_H_

#include <bits/stdc++.h>
#include <iostream>

#include "prospecto.h" // Biblioteca con las clases a usar

using namespace std;

const int MAX = 1000; // Constante para el tamaño de areglos

// Declaración de la clase Admisiones
class Admisiones{

    // Declaración de variables de instancia
    private:
        Prospecto * prosp[MAX];
        int num_prosp;
    
    // Declaración de métodos
    public:

        Admisiones(): num_prosp(0) {};

        void crear_prospecto();
        void mostrar_prospectos();
        void mostrar_prospectos(string tipo_prospecto);
        void mostrar_prospectos_admitidos();
        void mostrar_prospectos_admitidos(string tipo_prospecto);
        void agregar_prospecto_profesional(string nombre, int id, string tipo_prospecto, string avenida);
        void agregar_prospecto_preparatoria(string nombre, int id, string tipo_prospecto, string programa);
        void agregar_prospecto_posgrado(string nombre, int id, string tipo_prospecto, string tipo_posgrado);
};

/**
 * crear_prospectos genera objetos en Admisiones[]
 *
 * Crea objetos de tipo ProspectoPreparatoria, ProspectoProfesional y ProspectoPosgrado
 * y los guarda en el arreglo prosp[] a manera de ejemplo.
 * 
 * @param
 * @return
 */

void Admisiones::crear_prospecto(){

    // Para poder usar polimorfismo, new crea los objetos de ejemplo en tiempo de ejecución
    prosp[num_prosp] = new ProspectoProfesional("Juan Pérez", 100, "Profesional", "Negocios y Finanzas");
    num_prosp++;
    prosp[num_prosp] = new ProspectoProfesional("Matilda Sánchez", 101, "Profesional", "Ciencias Aplicadas");
    num_prosp++;
    prosp[num_prosp] = new ProspectoPreparatoria("María José Romero", 10, "Preparatoria", "Bicultural");
    num_prosp++;
    prosp[num_prosp] = new ProspectoProfesional("Juan Pablo Robles", 102, "Profesional", "Estudios Creativos");
    num_prosp++;
    prosp[num_prosp] = new ProspectoPosgrado("Daniela Martínez", 1000, "Posgrado", "Maestría");
    num_prosp++;
}

/**
 * mostrar_prospectos imprime los prospectos del arreglo prosp[]
 *
 * Utilizando un ciclo for imprime el resultado del método to_string de cada prospecto.
 * 
 * @param
 * @return
 */

void Admisiones::mostrar_prospectos(){
    for (int i = 0; i < num_prosp; i++)
        cout << prosp[i] -> to_string();
    
}

/**
 * mostrar_prospectos imprime los prospectos del arreglo prosp[] que coinciden con el tipo
 * de prospect ingresado
 *
 * Utilizando un ciclo for imprime el resultado del método to_string de cada prospecto
 * con la condición de que correspondan con el tipo indicado utilizando el getter
 * getTipoProspecto
 * 
 * @param string tipo_prospecto: debe ser 'Profesional', 'Preparatoria' o 'Posgrado'
 * @return
 */

void Admisiones::mostrar_prospectos(string tipo_prospecto){
    cout << "\nProspectos " << tipo_prospecto << ":\n\n";
    for (int i = 0; i < num_prosp; i++){
        if (tipo_prospecto == prosp[i] -> getTipoProspecto()){
            cout << prosp[i] -> to_string();
        }
        else{
            continue;
        }
    }
}

/**
 * mostrar_prospectos_admitidos imprime los prospectos del arreglo prosp[]
 * que estén admitidos a la institución
 *
 * Utilizando un ciclo for imprime el resultado del método to_string de cada prospecto con la
 * condicion de que su método estado_de_admision dé como resultado verdadero.
 * 
 * @param
 * @return
 */


void Admisiones::mostrar_prospectos_admitidos(){
    for (int i = 0; i < num_prosp; i++){
        if (prosp[i] -> estado_de_admision() == true){
            cout << prosp[i] -> to_string();
        }
        else{
            continue;
        }
    }
}

/**
 * mostrar_prospectos_admitidos imprime los prospectos del arreglo prosp[]
 * que estén admitidos a la institución y que coinciden con el tipo de prospecto ingresado
 *
 * Utilizando un ciclo for imprime el resultado del método to_string de cada prospecto con las
 * condiciones de que el prospecto sea del tipo solicitado y de que su método estado_de_admision dé
 * como resultado verdadero.
 * 
 * @param string tipo_prospecto: debe ser 'Profesional', 'Preparatoria' o 'Posgrado'
 * @return
 */

void Admisiones::mostrar_prospectos_admitidos(string tipo_prospecto){
    for (int i = 0; i < num_prosp; i++){
        if (tipo_prospecto == prosp[i] -> getTipoProspecto()){
            if (prosp[i] -> estado_de_admision() == true){
            cout << prosp[i] -> to_string();
        }
        else{
            continue;
        }
        }
        else{
            continue;
        }
    }
}

void Admisiones::agregar_prospecto_profesional(string nombre, int id, string tipo_prospecto, string avenida){

}

void Admisiones::agregar_prospecto_preparatoria(string nombre, int id, string tipo_prospecto, string programa){

}

void Admisiones::agregar_prospecto_posgrado(string nombre, int id, string tipo_prospecto, string tipo_posgrado){

}

#endif //ADMISIONES_H_