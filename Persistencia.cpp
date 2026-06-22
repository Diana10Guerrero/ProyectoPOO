#include "Persistencia.h"
#include <fstream>
#include <sstream>

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
        archivo << c.get_nombre() << ","
                << c.get_profesor() << ","
                << c.get_materia() << ","
                << c.get_nota()
                << "\n";
    }

    archivo.close();
}