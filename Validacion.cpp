#include "Validacion.h"
#include <regex>

// Validar formato de matrícula
// Ejemplo válido: 2024-1234
bool Validacion::matricula(const std::string& m) {
    std::regex formato("^[0-9]{4}-[0-9]{4}$");
    return std::regex_match(m, formato);
}

// Validar formato de código
// Ejemplos válidos: EST-001, MAT-101
bool Validacion::codigo(const std::string& c) {
    std::regex formato("^[A-Z]{2,5}-[0-9]{1,4}$");
    return std::regex_match(c, formato);
}

// Validar nombres: solo letras y espacios
bool Validacion::nombre(const std::string& n) {
    if (n.empty()) return false;
    std::regex formato("^[A-Za-zÁÉÍÓÚáéíóúÑñ ]+$");
    return std::regex_match(n, formato);
}

// Validar notas del 0 al 100
bool Validacion::nota(float n) {
    return n >= 0 && n <= 100;
}

// Validar sección
// Ejemplo: 01, 02, 03
bool Validacion::seccion(const std::string& s) {
    std::regex formato("^[0-9]{2}$");
    return std::regex_match(s, formato);
}
