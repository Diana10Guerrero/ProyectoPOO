 #pragma once
#include <vector>
#include <fstream>
#include <iostream>
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

    // Registro
    void registrarEstudiante();
    void registrarProfesor();
    void registrarMateria();
    void registrarCalificacion();

    // Mostrar
    void verCalificaciones();

    // Persistencia
    void guardarArchivo();
    void cargarArchivo();
};
