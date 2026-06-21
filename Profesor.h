#pragma once
#include <iostream>
#include <fstream>
#include <string>

// Clase Profesor
class Profesor {
private: // Atributos de la clase
    std::string nombre;
    std::string materia;
    float codigo;

public:
    // Constructor de la clase
    Profesor(std::string _nombre, std::string _materia, float _codigo);

    // Métodos de la clase
    void mostrar();

    std::string get_nombre() { return nombre; }
    std::string get_materia() { return materia; }
    float get_codigo() { return codigo; }

    // Serializar en archivo
    void serializar(std::ofstream & archivo);

    // Serializar como string
    std::string serializar() {
        return nombre + "\n" + materia + "\n" + std::to_string(codigo) + "\n";
    }
};
