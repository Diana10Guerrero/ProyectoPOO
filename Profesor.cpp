#include "Profesor.h"
#include <iostream>
#include <fstream>
#include <string>

// Constructor corregido
Profesor::Profesor(std::string _nombre, std::string _materia, float _codigo) {
    this->nombre = _nombre;
    this->materia = _materia;
    this->codigo = _codigo;
}

// Método mostrar corregido
void Profesor::mostrar() {
    std::cout << "Soy el profesor: " << this->nombre
              << ", imparto la materia: " << this->materia
              << ", mi código es: " << this->codigo << std::endl;
}

// Serializar en archivo
void Profesor::serializar(std::ofstream & archivo) {
    archivo << this->nombre << "\n"
            << this->materia << "\n"
            << this->codigo << "\n";
}
