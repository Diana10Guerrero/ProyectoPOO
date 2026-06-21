#pragma once
#include <iostream>
#include <vector>
// Esta es la plantilla de la clase Estudiante, que contiene los atributos y metodos de la clase.

class Estudiante {
    private: //Atributos privados de la clase Estudiante
    std::string nombre;
    std::string materia;
    std::string matricula;
    std::string seccion;

    public: // constructores y metodos publicos de la clase Estudiante
    Estudiante(std::string _nombre, std::string _matricula, std::string _seccion);
    // metodo para mostrar la informacion del estudiante