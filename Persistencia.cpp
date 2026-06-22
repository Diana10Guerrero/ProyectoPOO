#include "Persistencia.h"
#include <fstream>
#include <sstream>
#include <iostream>

Persistencia::Persistencia(std::string nombre_archivo) {
    this->nombre_archivo = nombre_archivo;
}

void Persistencia::guardar_calificaciones(const std::vector<Calificacion>& lista) {
    std::ofstream archivo(nombre_archivo);

    if (!archivo.is_open()) {
        std::cout << "Error al abrir archivo para guardar.\n";
        return;
    }

    for (const Calificacion& c : lista) {
        archivo << c.getEstudiante().get_Nombre() << ","
                << c.getProfesor().get_nombre() << ","
                << c.getMateria().get_nombre() << ","
                << c.getNota()
                << "\n";
    }

    archivo.close();
}
