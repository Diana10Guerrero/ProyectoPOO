#pragma once
#include <iostream>
#include "Estudiante.h"
#include "Materia.h"
#include "Profesor.h"

class Calificacion {
    private:
        std::string estudiante;
        std::string materia;
        std::string profesor;
        float nota;
   
    public:
    Estudiante estudiante;
    Materia materia;
    Profesor profesor;