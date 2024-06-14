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

#include <string>
#include <iostream> // Biblioteca que incluye operadores de entrada y salida

#include "prospecto.h" // Biblioteca con los objetos a usar de la clase Prospecto
                       // y sus clases heredadas

#include "admisiones.h" // Biblioteca con los objetos a usar de la clase Admisiones

using namespace std;

Admisiones admisiones;

int main(){
    bool continuar = true;
    int opcion;
    while (continuar == true){
        cout << "\nELIGE UNA OPCION (1/2/3/4): \n\n" <<
        "1. Ver ejemplo \n" <<
        "2. Añadir prospecto\n" <<
        "3. Ver prospectos\n" <<
        "4. Ver prospectos admitidos\n" <<
        "5. Ver prospectos con beca\n" <<
        "6. Salir\n" << endl;
        cin >> opcion;
        if (opcion == 1){
            admisiones.crear_prospectos_ejemplo();
            admisiones.mostrar_prospectos();
            admisiones.mostrar_prospectos("Profesional");
        }
        else if (opcion == 2){
            cout << "Ingrese el nombre del prospecto " << endl;
            cin.ignore();
            string nombre;
            getline(cin, nombre);
            cout << endl;
            int id = 0;
            cout << "Ingrese el tipo de prospecto (Profesional/Preparatoria/Posgrado):" << endl;
            string tipo_prospecto;
            cin >> tipo_prospecto;
            cout << endl;
            cout << "Ingrese el puntaje del examen de admision del prospecto:" << endl;
            double puntaje_examen;
            cin >> puntaje_examen;
            cout << endl;
            cout << "Ingrese el promedio del prospecto:" << endl;
            double promedio;
            cin >> promedio;
            cout << endl;
            if (tipo_prospecto == "Profesional"){
                string avenida;
                cout << "Ingrese la avenida del prospecto: ";
                cin.ignore();
                getline(cin, avenida);
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
            cout << "\nIngrese el tipo de prospecto de los que quiere" <<
            "ver la informacion (1/2/3/4)\n";
            cout << "\n1. Profesional\n 2. Preparatoria\n 3. Posgrado\n 4. Todos";
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
                cout << "\n\nOPCION INVALIDA\n";
            }
        }
        else if (opcion == 4){
            cout << "\nIngrese el tipo de prospecto de los que quiere ver la informacion (1/2/3/4)\n";
            cout << "\n1. Profesional\n 2. Preparatoria\n 3. Posgrado\n 4. Todos";
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
                cout << "\n\nOPCION INVALIDA\n";
            }
        }
        else if (opcion == 5){
            cout << "\nIngrese el tipo de prospecto de los que quiere ver la informacion (1/2/3/4)\n";
            cout << "\n1. Profesional\n 2. Preparatoria\n 3. Posgrado\n 4. Todos";
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
                cout << "\n\nOPCION INVALIDA\n";
            }
        }
        else if (opcion == 6){
            cout << "\nADIOS";
            continuar = false;
        }
        else{
            cout << "\n\nOPCION INVALIDA\n";
        }
    }
    return 0;
};