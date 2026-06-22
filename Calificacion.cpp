#include "Calificacion.h"
#include <iostream>
#include <fstream>
#include <sftream>

Calificacion::Calificacion(Estudiante _estudiante, Profesor _profesor, Materia _materia, float _nota)
    : estudiante(_estudiante),
      profesor(_profesor),
      materia(_materia),
      nota(_nota)
{}

void Calificacion::mostrar() {
    std::cout << "----- CALIFICACIÓN -----\n";
    estudiante.mostrar();
    profesor.mostrar();
    std::cout << "Nota: " << nota << "\n";
}

void Calificacion::serializar(std::ofstream &archivo) {
    archivo << estudiante.get_Nombre() << "|"
            << profesor.get_nombre() << "|"
            << materia.get_nombre() << "|"
            << nota << "\n";
};