#ifndef PROSPECTO_H_
#define PROSPECTO_H_

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class Prospecto{

    protected:

        string nombre;
        int id;
        string tipo_prospecto;
        double puntaje_examen;
        double promedio;


    public:

        virtual ~Prospecto() {};

        Prospecto(): nombre(""), id(0), tipo_prospecto(""), puntaje_examen(0), promedio(0) {}
        Prospecto(string nombre_, int id_, string tipo_prospecto_);
        virtual bool beca();
        virtual bool estado_de_admision();
        virtual string to_string();
        void set_puntaje(double puntaje_);
        void set_promedio(double promedio_);
};

Prospecto::Prospecto(string nombre_, int id_, string tipo_prospecto_){
    nombre = nombre_;
    id = id_;
    tipo_prospecto = tipo_prospecto_;
}

void Prospecto::set_puntaje(double puntaje_){
    puntaje_examen = puntaje_;
}

void Prospecto::set_promedio(double promedio_){
    promedio = promedio_;
}

class ProspectoProfesional: public Prospecto{

    private:

        string avenida;
    
    public:

        ProspectoProfesional(string nombre_, int id_, string tipo_prospecto_, string avenida_):Prospecto(nombre_, id_, tipo_prospecto_){
            avenida = avenida_;
        }
        bool beca();
        bool estado_de_admision();
        string to_string();
};

bool ProspectoProfesional:: beca(){
    if (puntaje_examen >= 1200 && promedio >= 90){
        return true;
    return false;
    }
}

bool ProspectoProfesional::estado_de_admision(){
    if (puntaje_examen >= 800 && promedio >= 70){
        return true;
    return false;
    }
}

string ProspectoProfesional::to_string(){
    stringstream aux;
    aux << "Nombre: " << nombre << "\nID: " << id << "\nTipo: " << tipo_prospecto << "\nAvenida: " 
    << avenida << "\nPuntaje Examen de Admisión: " << puntaje_examen << "\nPromedio: " << promedio;
    return aux.str();
}

class ProspectoPreparatoria: public Prospecto{

    private:

        string programa;
    
    public:

        ProspectoPreparatoria(string nombre_, int id_, string tipo_prospecto_, string programa_):Prospecto(nombre_, id_, tipo_prospecto_){
            programa = programa_;
        }
        bool beca();
        bool estado_de_admision();
        string to_string();
};

bool ProspectoPreparatoria::beca(){
    if (puntaje_examen >= 1000 && promedio >= 90){
        return true;
    return false;
    }
}

bool ProspectoPreparatoria::estado_de_admision(){
    if (puntaje_examen >= 700 && promedio >= 70){
        return true;
    return false;
    }
}

string ProspectoPreparatoria::to_string(){
    stringstream aux;
    aux << "Nombre: " << nombre << "\nID: " << id << "\nTipo: " << tipo_prospecto << "\nPrograma: " 
    << programa << "\nPuntaje Examen de Admisión: " << puntaje_examen << "\nPromedio: " << promedio;
    return aux.str();
}

class ProspectoPosgrado: public Prospecto{

    private:

        string tipo_posgrado;

    public:

        ProspectoPosgrado(string nombre_, int id_, string tipo_prospecto_, string tipo_posgrado_):Prospecto(nombre_, id_, tipo_prospecto_){
            tipo_posgrado = tipo_posgrado_;
        }
        bool beca();
        bool estado_de_admision();
        string to_string();
};

bool ProspectoPosgrado:: beca(){
    if (puntaje_examen >= 1300 && promedio >= 90){
        return true;
    return false;
    }
}

bool ProspectoPosgrado:: estado_de_admision(){
    if (puntaje_examen >= 900 && promedio >= 70){
        return true;
    return false;
    }
}

string ProspectoPosgrado::to_string(){
    stringstream aux;
    aux << "Nombre: " << nombre << "\nID: " << id << "\nTipo: " << tipo_prospecto << "\nPosgrado: " 
    << tipo_posgrado << "\nPuntaje Examen de Admisión: " << puntaje_examen << "\nPromedio: " << promedio;
    return aux.str();
}

#endif