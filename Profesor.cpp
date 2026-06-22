#include "Profesor.h"
#include <iostream>

Profesor::Profesor(std::string _nombre, std::string _codigo) {
    this->nombre = _nombre;
    this->codigo = _codigo;
}

void Profesor::mostrar() const {
    std::cout << "Profesor: " << nombre
              << " | Código: " << codigo << std::endl;
}

void Profesor::serializar(std::ofstream &archivo) const {
    archivo << nombre << "\n"
            << codigo << "\n";
}
