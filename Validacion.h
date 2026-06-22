#pragma once
#include <string>
#include <iostream>

class Validacion {
public:

    // Validar formato de matrícula (ej: 2024-1234)
    static bool matricula(const std::string& m);

    // Validar formato de código (ej: EST-001, PROF-12, MAT-101)
    static bool codigo(const std::string& c);

    // Validar nombres (solo letras y espacios)
    static bool nombre(const std::string& n);

    // Validar rango de notas (0 a 100)
    static bool nota(float n);

    // Validar seccion (ej: 01, 02, 03)
    static bool seccion(const std::string& s);
};