// plantilla de materia
#pragma once
#include <iostream>
#include <fstream>

class Materia{
    private:
        std::string nombre;
        float codigo;
        float creditos;
// constructor de materia
    public:
     Materia(std::string _nombre, float _codigo, float _creditos);
        void mostrar_info();
        std:: string get_nombre() { return nombre; }
        float get_codigo() { return codigo; }
        float get_creditos() { return creditos; }
        std::string serializar() {
            return {"Nombre" + nombre + "\nCodigo:" + float _codigo + "\nCreditos:" + float _creditos}
        };