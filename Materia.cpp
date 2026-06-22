//incluyo plantilla de materia
#include "Materia.h"
#include <iostream>
#include <fstream>
#include <string>

//defino constructor de materia
Materia::Materia(std::string _nombre, float _codigo, float _creditos) {
    this->nombre = _nombre;
    this->codigo = _codigo;
    this->creditos = _creditos;
}


