#pragma once
#include <iostream>
#include <fstream>
#include "Estudiante.h"
#include "Materia.h"
#include "Profesor.h"

class Calificacion {
private:
    Estudiante estudiante;
    Profesor profesor;
    Materia materia;
    float nota;

public:
    // SOLO DECLARACIÓN DEL CONSTRUCTOR
    Calificacion(Estudiante _estudiante, Profesor _profesor, Materia _materia, float _nota);

    // Métodos
    void mostrar();
    void serializar(std::ofstream &archivo);

    
    Estudiante getEstudiante() { return estudiante; }
    Profesor getProfesor() { return profesor; }
    Materia getMateria() { return materia; }
    float getNota() { return nota; }
};
