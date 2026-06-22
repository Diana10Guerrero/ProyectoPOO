#pragma once
#include <vector>
#include <string>
#include "Calificacion.h"
#include <sftream> 

class Persistencia {
private:
    std::string nombre_archivo;

public:
    Persistencia(std::string nombre_archivo);

    void guardar_calificaciones(const std::vector<Calificacion>& lista);
    std::vector<Calificacion> cargar_calificaciones();
};