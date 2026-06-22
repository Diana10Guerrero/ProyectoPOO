#pragma once
#include <string>

class Profesor {
private:
    std::string nombre;
    std::string codigo;

public:
    Profesor() {}
    Profesor(std::string n, std::string c) : nombre(n), codigo(c) {}

    std::string get_nombre() const { return nombre; }
    std::string get_codigo() const { return codigo; }
};

