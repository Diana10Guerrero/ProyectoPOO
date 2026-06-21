#include "Estudiante.h" // incluyo la plantilla de la clase Estudiante
#include <iostream>
#include <fstream>
#include <string>

// Constructor de la clase Estudiante
Estudiante::Estudiante(std::string _nombre, std::string _materia, std::string _matricula, float _seccion) {
    this->nombre = _nombre;
    this->materia = _materia;
    this->matricula = _matricula;
    this->seccion = _seccion;
}

// Método para mostrar la información del estudiante
void Estudiante::mostrar() {
    std::cout << "Soy el estudiante: " << this->nombre
              << ", mi materia es: " << this->materia
              << ", mi matrícula es: " << this->matricula
              << ", sección: " << this->seccion << std::endl;
}
