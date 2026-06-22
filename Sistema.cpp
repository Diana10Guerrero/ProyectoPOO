#pragma once
#include <vector>
#include <string>
#include "Estudiante.h"
#include "Profesor.h"
#include "Materia.h"
#include "Calificacion.h"

class Sistema {
private:
    std::vector<Estudiante> listaEstudiantes;
    std::vector<Profesor> listaProfesores;
    std::vector<Materia> listaMaterias;
    std::vector<Calificacion> listaCalificaciones;

public:
    Sistema();

    void menu();
    void registrarEstudiante();
    void registrarProfesor();
    void registrarMateria();
    void registrarCalificacion();
    void verCalificaciones();
    void guardarArchivo();
    void cargarArchivo();
};

 