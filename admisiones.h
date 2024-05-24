#ifndef ADMISIONES_H_
#define ADMISIONES_H_

#include <bits/stdc++.h>
#include <iostream>

#include "prospecto.h"

using namespace std;

const int MAX = 1000;

class Admisiones{
    
    private:

        Prospecto * prosp[MAX];
        int num_prosp;
    
    public:

        Admisiones(): num_prosp(0) {};

        void crear_prospecto();
        void mostrar_prospectos();
        void mostrar_prospectos(string tipo_prospecto);
        void mostrar_prospectos_admitidos();
        void mostrar_propsectos_admitidos(string tipo_prospecto);
        void agregar_prospecto_profesional(string nombre, int id, string tipo_prospecto, string avenida);
        void agregar_prospecto_preparatoria(string nombre, int id, string tipo_prospecto, string programa);
        void agregar_prospecto_posgrado(string nombre, int id, string tipo_prospecto, string tipo_posgrado);
};

void Admisiones::crear_prospecto(){
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

void Admisiones::mostrar_prospectos(){
    for (int i = 0; i < num_prosp; i++)
        cout << prosp[i] -> to_string();
    
}

void Admisiones::mostrar_prospectos(string tipo_prospecto){

}

void Admisiones::mostrar_prospectos_admitidos(){

}

void Admisiones::mostrar_propsectos_admitidos(string tipo_prospecto){

}

void Admisiones::agregar_prospecto_profesional(string nombre, int id, string tipo_prospecto, string avenida){

}

void Admisiones::agregar_prospecto_preparatoria(string nombre, int id, string tipo_prospecto, string programa){

}

void Admisiones::agregar_prospecto_posgrado(string nombre, int id, string tipo_prospecto, string tipo_posgrado){

}

#endif