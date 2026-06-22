#include "Calificacion.h"
#include <iostream>
#include <fstream>

Calificacion::Calificacion(Estudiante _estudiante, Profesor _profesor, Materia _materia, float _nota) {
    this->estudiante = _estudiante;
    this->profesor = _profesor;
    this->materia = _materia;
    this->nota = _nota;
}

void Calificacion::mostrar() {
    std::cout << "----- CALIFICACIÓN -----\n";
    estudiante.mostrar();
    profesor.mostrar();
    materia.mostrar_info();
    std::cout << "Nota: " << nota << "\n";
}

void Calificacion::serializar(std::ofstream &archivo) {
    archivo << estudiante.get_Nombre() << "|"
            << profesor.get_nombre() << "|"
            << materia.get_nombre() << "|"
            << nota << "\n";
}
