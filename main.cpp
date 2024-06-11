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

int main(){
    bool continuar = true;
    while (continuar == true){
        int opcion;
        cout << "ELIGE UNA OPCION (1/2/3/4): \n\n" <<
        "1. Ver ejemplo \n" <<
        "2. Añadir prospecto\n" <<
        "3. Ver prospectos\n" <<
        "4. Ver prospectos admitidos\n" <<
        "5. Ver prospectos con beca\n" <<
        "6. Salir\n";
        cin >> opcion;
        Admisiones admisiones;
        if (opcion == 1){
            admisiones.crear_prospectos_ejemplo();
            admisiones.mostrar_prospectos();
            admisiones.mostrar_prospectos("Profesional");
        }
        else if (opcion == 2){
            string nombre;
            int id;
            string tipo_prospecto;
            double puntaje_examen;
            double promedio;

            cout << "Ingrese el nombre del prospecto ";
            cin >> nombre;
            cout << "Ingrese la id del prospecto: ";
            cin >> id;
            cout << "Ingrese el tipo de prospecto (Profesional/Preparatoria/Posgrado): ";
            cin >> tipo_prospecto;
            cout << "Ingrese el puntaje del examen de admision del prospecto: ";
            cin >> puntaje_examen;
            cout << "Ingrese el promedio del prospecto: ";
            cin >> promedio;
            if (tipo_prospecto == "Profesional"){
                string avenida;
                cout << "Ingrese la avenida del prospecto: ";
                cin >> avenida;
                admisiones.agregar_prospecto_profesional(nombre, id, tipo_prospecto,
                                                        puntaje_examen, promedio, avenida);
            }
            else if (tipo_prospecto == "Preparatoria"){
                string programa;
                cout << "Ingrese el programa del prospecto: ";
                cin >> programa;
                admisiones.agregar_prospecto_preparatoria(nombre, id, tipo_prospecto,
                                                        puntaje_examen, promedio, programa);
            }
            else if (tipo_prospecto == "Posgrado"){
                string tipo_posgrado;
                cout << "Ingrese el tipo de posgrado del prospecto: ";
                cin >> tipo_posgrado;
                admisiones.agregar_prospecto_posgrado(nombre, id, tipo_prospecto,
                                                        puntaje_examen, promedio, tipo_posgrado);
            }
        }
        else if (opcion == 3){
            cout << "\nIngrese el tipo de prospecto de los que quiere ver la informacion (1/2/3/4)\n";
            cout << "1. Profesional\n 2. Preparatoria\n 3. Posgrado\n 4. Todos";
            int opcion2;
            cin >> opcion2;
            if (opcion2 == 1){
                admisiones.mostrar_prospectos("Profesional");
            }
            else if (opcion2 == 2){
                admisiones.mostrar_prospectos("Preparatoria");
            }
            else if (opcion2 == 3){
                admisiones.mostrar_prospectos("Posgrado");
            }
            else if (opcion2 == 4){
                admisiones.mostrar_prospectos();
            }
            else{
                cout << "OPCION INVALIDA";
            }
        }
        else if (opcion == 4){
            cout << "\nIngrese el tipo de prospecto de los que quiere ver la informacion (1/2/3/4)\n";
            cout << "1. Profesional\n 2. Preparatoria\n 3. Posgrado\n 4. Todos";
            int opcion2;
            cin >> opcion2;
            if (opcion2 == 1){
                admisiones.mostrar_prospectos_admitidos("Profesional");
            }
            else if (opcion2 == 2){
                admisiones.mostrar_prospectos_admitidos("Preparatoria");
            }
            else if (opcion2 == 3){
                admisiones.mostrar_prospectos_admitidos("Posgrado");
            }
            else if (opcion2 == 4){
                admisiones.mostrar_prospectos_admitidos();
            }
            else{
                cout << "OPCION INVALIDA";
            }
        }
        else if (opcion == 5){
            cout << "\nIngrese el tipo de prospecto de los que quiere ver la informacion (1/2/3/4)\n";
            cout << "1. Profesional\n 2. Preparatoria\n 3. Posgrado\n 4. Todos";
            int opcion2;
            cin >> opcion2;
            if (opcion2 == 1){
                admisiones.mostrar_prospectos_beca("Profesional");
            }
            else if (opcion2 == 2){
                admisiones.mostrar_prospectos_beca("Preparatoria");
            }
            else if (opcion2 == 3){
                admisiones.mostrar_prospectos_beca("Posgrado");
            }
            else if (opcion2 == 4){
                admisiones.mostrar_prospectos_beca();
            }
            else{
                cout << "OPCION INVALIDA";
            }
        }
        else if (opcion == 6){
            cout << "\nADIOS";
            continuar = false;
        }
        else{
            cout << "\nOPCION INVALIDA";
        }
    }
    Admisiones admisiones;
    admisiones.crear_prospectos_ejemplo();
    admisiones.mostrar_prospectos();
    admisiones.mostrar_prospectos("Profesional");
    return 0;
};