/*
*
* Proyecto Sistema de Admisiones y Becas
* Patricio Lugo Albor 
* A01707192
* 11/6/2024
* version: 3
* Esta clase define objeto de tipo Prospecto que contiene las clases heredadas
* ProspectoProfesional, ProspectoPreparatoria y ProspectoPosgrado
*/

#ifndef PROSPECTO_H_
#define PROSPECTO_H_

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// Declaración de clase Prospecto que es abstracta
class Prospecto{

    // Declaración de variables de instancia
    protected:
        string nombre;
        int id;
        string tipo_prospecto;
        double puntaje_examen;
        double promedio;

    // Declaración de métodos
    public:
        Prospecto(): nombre(""), id(0), tipo_prospecto(""), puntaje_examen(0), promedio(0) {}
        Prospecto(string nombre_, int id_, string tipo_prospecto_, double puntaje_examen_,
        double promedio_): nombre(nombre_), id(id_), tipo_prospecto(tipo_prospecto_),
        puntaje_examen(puntaje_examen_), promedio(promedio_) {};
        virtual bool beca() = 0;               // Método abstracto que será sobreescrito
        virtual bool estado_de_admision() = 0; // Método abstracto que será sobreescrito
        virtual string to_string() = 0;        // Método abstracto que será sobreescrito

        // Getters
        string getNombre(){return nombre;}
        int getID(){return id;}
        string getTipoProspecto(){return tipo_prospecto;}
        double getPuntaje(){return puntaje_examen;}
        double getPromedio(){return promedio;}

        // Setters
        void setNombre(string nombre_){
            nombre = nombre_;
        }
        void setID (int id_){
            id = id_;
        }
        void setTipoProspecto(string tipo_prospecto_){
            tipo_prospecto = tipo_prospecto_;
        }
        void set_puntaje(double puntaje_){
            puntaje_examen = puntaje_;
        }
        void set_promedio(double promedio_){
            promedio = promedio_;
        }

};


// Declaración objeto ProspectoProfesional que hereda de Prospecto
class ProspectoProfesional: public Prospecto{

    // Variables de instancia del objeto
    private:
        string avenida;

    // Declaración de métodos   
    public:
        ProspectoProfesional(): Prospecto(), avenida("") {};
        ProspectoProfesional(string nombre_, int id_, string tipo_prospecto_, double puntaje_examen_,
        double promedio_, string avenida_):
        Prospecto(nombre_, id_, tipo_prospecto_,puntaje_examen_, promedio_ ), avenida(avenida_) {};
        bool beca();
        bool estado_de_admision();
        string to_string();
};

/**
* beca regresa un valor booleano dependiente de los atributos puntaje_examen y promedio
*
* El objeto de la clase ProspectoProfesional será acredor a una beca
*tiene un puntaje_examen mayor o igual a 1200 y un promedio mayor o igual a 90
*
* @param 
* @return bool
*/

bool ProspectoProfesional:: beca(){
    if (puntaje_examen >= 1200 && promedio >= 90){
        return true;
    }
    return false;
}

/**
* estado_de_admision regresa un valor booleano dependiente de los atributos puntaje_examen y promedio
*
* El objeto de la clase ProspectoProfesional será admitido
*tiene un puntaje_examen mayor o igual a 800 y un promedio mayor o igual a 70.
*
* @param 
* @return bool
*/

bool ProspectoProfesional::estado_de_admision(){
    if (puntaje_examen >= 800 && promedio >= 70){
        return true;
    }
    return false;
}

/**
* to_string convierte atributos a tipo string
*
* concatena los atributos del objeto en una sola string para su impresión
*
* @param 
* @return string con concatenación de los atributos y texto
*/

string ProspectoProfesional::to_string(){
    stringstream aux;
    aux << "Nombre: " << nombre << "\nID: " << id << "\nTipo: " << tipo_prospecto << "\nAvenida: " 
    << avenida << "\nPuntaje Examen de Admisión: " << puntaje_examen << "\nPromedio: " << promedio;
    return aux.str();
}

// Declaración objeto ProspectoPreparatoria que hereda de Prospecto
class ProspectoPreparatoria: public Prospecto{

    // Variables de instancia del objeto
    private:
        string programa;
    
    // Declaración de métodos
    public:
        ProspectoPreparatoria(): Prospecto(), programa("") {};
        ProspectoPreparatoria(string nombre_, int id_, string tipo_prospecto_, double puntaje_examen_,
        double promedio_, string programa_):Prospecto(nombre_, id_, tipo_prospecto_, puntaje_examen_,
        promedio_), programa(programa_) {};
        bool beca();
        bool estado_de_admision();
        string to_string();
};

/**
* beca regresa un valor booleano dependiente de los atributos puntaje_examen y promedio
*
* El objeto de la clase ProspectoProfesional será acredor a una beca
*tiene un puntaje_examen mayor o igual a 1000 y un promedio mayor o igual a 90
*
* @param 
* @return bool
*/

bool ProspectoPreparatoria::beca(){
    if (puntaje_examen >= 1000 && promedio >= 90){
        return true;
    }
    return false;
}

/**
* estado_de_admision regresa un valor booleano dependiente de los atributos puntaje_examen y promedio
*
* El objeto de la clase ProspectoProfesional será admitido
*tiene un puntaje_examen mayor o igual a 700 y un promedio mayor o igual a 70.
*
* @param 
* @return bool
*/

bool ProspectoPreparatoria::estado_de_admision(){
    if (puntaje_examen >= 700 && promedio >= 70){
        return true;
    }
    return false;
}

/**
* to_string convierte atributos a tipo string
*
* concatena los atributos del objeto en una sola string para su impresión
*
* @param 
* @return string con concatenación de los atributos y texto
*/

string ProspectoPreparatoria::to_string(){
    stringstream aux;
    aux << "Nombre: " << nombre << "\nID: " << id << "\nTipo: " << tipo_prospecto << "\nPrograma: " 
    << programa << "\nPuntaje Examen de Admisión: " << puntaje_examen << "\nPromedio: " << promedio;
    return aux.str();
}

// Declaración objeto ProspectoPosgrado que hereda de Prospecto
class ProspectoPosgrado: public Prospecto{

    // Variables de instancia del objeto
    private:
        string tipo_posgrado;

    // Declaración de métodos
    public:
        ProspectoPosgrado(): Prospecto(), tipo_posgrado("") {};
        ProspectoPosgrado(string nombre_, int id_, string tipo_prospecto_, double puntaje_examen_,
        double promedio_, string tipo_posgrado_):Prospecto(nombre_, id_, tipo_prospecto_, puntaje_examen_,
        promedio_), tipo_posgrado(tipo_posgrado_) {};
        bool beca();
        bool estado_de_admision();
        string to_string();
};

/**
* beca regresa un valor booleano dependiente de los atributos puntaje_examen y promedio
*
* El objeto de la clase ProspectoProfesional será acredor a una beca
*tiene un puntaje_examen mayor o igual a 1300 y un promedio mayor o igual a 90
*
* @param 
* @return bool
*/

bool ProspectoPosgrado:: beca(){
    if (puntaje_examen >= 1300 && promedio >= 90){
        return true;
    }
    return false;
}

/**
* estado_de_admision regresa un valor booleano dependiente de los atributos puntaje_examen y promedio
*
* El objeto de la clase ProspectoProfesional será admitido
*tiene un puntaje_examen mayor o igual a 900 y un promedio mayor o igual a 70.
*
* @param 
* @return bool
*/

bool ProspectoPosgrado:: estado_de_admision(){
    if (puntaje_examen >= 900 && promedio >= 70){
        return true;
    }
    return false;
}

/**
* to_string convierte atributos a tipo string
*
* concatena los atributos del objeto en una sola string para su impresión
*
* @param 
* @return string con concatenación de los atributos y texto
*/

string ProspectoPosgrado::to_string(){
    stringstream aux;
    aux << "Nombre: " << nombre << "\nID: " << id << "\nTipo: " << tipo_prospecto << "\nPosgrado: " 
    << tipo_posgrado << "\nPuntaje Examen de Admisión: " << puntaje_examen << "\nPromedio: " << promedio;
    return aux.str();
}

#endif // Prospecto_H_