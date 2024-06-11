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

        void crear_prospectos_ejemplo();
        void mostrar_prospectos();
        void mostrar_prospectos(string tipo_prospecto);
        void mostrar_prospectos_admitidos();
        void mostrar_prospectos_admitidos(string tipo_prospecto);
        void mostrar_prospectos_beca();
        void mostrar_prospectos_beca(string tipo_prospecto);
        void agregar_prospecto_profesional(string nombre, int id, string tipo_prospecto,
                                           double puntaje_examen, double promedio, string avenida);
        void agregar_prospecto_preparatoria(string nombre, int id, string tipo_prospecto,
                                            double puntaje_examen, double promedio, string programa);
        void agregar_prospecto_posgrado(string nombre, int id, string tipo_prospecto,
                                            double puntaje_examen, double promedio,string tipo_posgrado);
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

void Admisiones::crear_prospectos_ejemplo(){

    // Para poder usar polimorfismo, new crea los objetos de ejemplo en tiempo de ejecución
    prosp[num_prosp] = new ProspectoProfesional("Juan Perez", 100, "Profesional", 1200, 89, "Negocios y Finanzas");
    num_prosp++;
    prosp[num_prosp] = new ProspectoProfesional("Matilda Sanchez", 101, "Profesional", 1400, 95, "Ciencias Aplicadas");
    num_prosp++;
    prosp[num_prosp] = new ProspectoPreparatoria("Maria Jose Romero", 10, "Preparatoria", 1150, 91, "Bicultural");
    num_prosp++;
    prosp[num_prosp] = new ProspectoProfesional("Juan Pablo Robles", 102, "Profesional", 900, 91, "Estudios Creativos");
    num_prosp++;
    prosp[num_prosp] = new ProspectoPosgrado("Daniela Martinez", 1000, "Posgrado", 1560, 98, "Maestria");
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

/**
 * mostrar_prospectos_beca imprime los prospectos del arreglo prosp[]
 * que estén en posibilidades de adquirir una beca
 *
 * Utilizando un ciclo for imprime el resultado del método to_string de cada prospecto con la
 * condicion de que su método beca dé como resultado verdadero.
 * 
 * @param
 * @return
 */

void Admisiones::mostrar_prospectos_beca(){
    for (int i = 0; i< num_prosp; i++){
        if (prosp[i] -> beca() == true){
            cout << prosp[i] -> to_string();
        }
        else{
            continue;
        }
    }
}

/**
 * mostrar_prospectos_beca imprime los prospectos del arreglo prosp[]
 * que estén en posibilidades de adquirir una beca y que coinciden con el tipo de prospecto
 * ingresado
 *
 * Utilizando un ciclo for imprime el resultado del método to_string de cada prospecto con las
 * condiciones de que el prospecto sea del tipo solicitado y de que su método beca dé como
 * resultado verdadero.
 * 
 * @param string tipo_prospecto: debe ser 'Profesional', 'Preparatoria' o 'Posgrado'
 * @return
 */

void Admisiones::mostrar_prospectos_beca(string tipo_prospecto){
    for (int i = 0; i < num_prosp; i++){
        if (tipo_prospecto == prosp[i] -> getTipoProspecto()){
            if (prosp[i] -> beca() == true){
                cout << prosp[i] -> to_string();
            }
        }
    }
}

/**
 * agregar_prospecto_profesional crea un objeto de tipo de la clase
 * ProspectoProfesional y posteriormente lo agrega al arreglo de prospectos
 *
 * Crea un objeto ProspectoProfesional y lo añade al arreglo de prospectos
 * usando como índice el contador num_prosp y luego le suma 1 al índice.
 *
 * @param string nombre, int id, string tipo_prospecto, double puntaje_examen,
 * double promedio y string avenida.
 * @return
 */

void Admisiones::agregar_prospecto_profesional(string nombre, int id, string tipo_prospecto,
                                               double puntaje_examen, double promedio, string avenida){
    prosp[num_prosp] = new ProspectoProfesional(nombre, id, tipo_prospecto, puntaje_examen, promedio, avenida);
    num_prosp++;
}

/**
 * agregar_prospecto_preparatoria crea un objeto de tipo de la clase
 * ProspectoPreparatoria y posteriormente lo agrega al arreglo de prospectos
 *
 * Crea un objeto ProspectoPreparatoria y lo añade al arreglo de prospectos
 * usando como índice el contador num_prosp y luego le suma 1 al índice.
 *
 * @param string nombre, int id, string tipo_prospecto, double puntaje_examen,
 * double promedio y string programa.
 * @return
 */

void Admisiones::agregar_prospecto_preparatoria(string nombre, int id, string tipo_prospecto,
                                                double puntaje_examen, double promedio, string programa){
    prosp[num_prosp] = new ProspectoPreparatoria(nombre, id, tipo_prospecto, puntaje_examen, promedio, programa);
    num_prosp++;
}

/**
 * agregar_prospecto_posgrado crea un objeto de tipo de la clase
 * ProspectoPosgrado y posteriormente lo agrega al arreglo de prospectos
 *
 * Crea un objeto ProspectoPosgrado y lo añade al arreglo de prospectos
 * usando como índice el contador num_prosp y luego le suma 1 al índice.
 *
 * @param string nombre, int id, string tipo_prospecto, double puntaje_examen,
 * double promedio y string tipo_posgrado.
 * @return
 */

void Admisiones::agregar_prospecto_posgrado(string nombre, int id, string tipo_prospecto,
                                            double puntaje_examen, double promedio, string tipo_posgrado){
    prosp[num_prosp] = new ProspectoPosgrado(nombre, id, tipo_prospecto, puntaje_examen, promedio, tipo_posgrado);
    num_prosp++;                                            
}

#endif //ADMISIONES_H_