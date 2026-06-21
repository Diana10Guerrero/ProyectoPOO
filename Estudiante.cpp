#include "Estudiante.h" //incluyo la pantilla de la clase Estudiante
#include <iostream>
#include <fstream>
// creacion objecto estudiante (instancia de la clase Estudiante) y definicion de sus metodos
Estudiante::Estudiante(std::string _nombre, std::string _matricula, std::string _seccion) {
    this ->nombre = _nombre;
    this ->matricula = _matricula;
    this ->seccion = _seccion;
}