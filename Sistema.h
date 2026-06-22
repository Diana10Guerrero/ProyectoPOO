#pragma once
#include <vector>
#include <fstream>
#include "Persistencia.h"
#include "Validacion.h"

class Sistema {
private:
    std::vector<Calificacion> lista;
    
public:
   Sistema() {
        cargarArchivo();
    }

    void menu() {
    int opcion;

    do {
        cout << "\n--- SISTEMA DE REGISTRO ---\n";
        cout << "1. Registrar Estudiante\n";
        cout << "2. Registrar Profesor\n";
        cout << "3. Registrar Materia\n";
        cout << "4. Registrar Calificación\n";
        cout << "5. Ver Calificaciones\n";
        cout << "6. Guardar y cerrar\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opción: ";

        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1: registrarEstudiante(); break;
            case 2: registrarProfesor(); break;
            case 3: registrarMateria(); break;
            case 4: registrarCalificacion(); break;
            case 5: verCalificaciones(); break;
            case 6: guardarArchivo(); break;
            case 0: cout << "Saliendo...\n"; break;
            default: cout << "Opción inválida\n";
        }

    } while (opcion != 0);
}
}

void registrarEstudiante() {
    string nombre, matricula, materia;
    float nota;

    cout << "Nombre del estudiante: ";
    getline(cin, nombre);

    cout << "Matrícula: ";
    getline(cin, matricula);

    cout << "Materia: ";
    getline(cin, materia);

    cout << "Nota: ";
    cin >> nota;
    cin.ignore();

    lista.push_back(Calificacion(nombre, matricula, materia, nota));

    cout << "Calificación registrada.\n";
}

void registrarProfesor() {
    string nombre, id;

    cout << "\n--- REGISTRO DE PROFESOR ---\n";

    cout << "Nombre del profesor: ";
    getline(cin, nombre);

    cout << "ID del profesor: ";
    getline(cin, id);

    listaProfesores.push_back(Profesor(nombre, id));

    cout << "Profesor registrado correctamente.\n";
}


void guardar() {
    ofstream archivo("calificaciones.txt");

    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo para guardar.\n";
        return;
    }

    for (auto &c : lista) {
        archivo << c.serializar() << endl;
    }

    archivo.close();
    cout << "Datos guardados correctamente.\n";
}

void cargar() {
    ifstream archivo("calificaciones.txt");
    if (!archivo.is_open()) return;

    string linea;
    while (getline(archivo, linea)) {

        size_t p1 = linea.find(",");
        size_t p2 = linea.find(",", p1 + 1);
        size_t p3 = linea.find(",", p2 + 1);

        string nombre = linea.substr(0, p1);
        string matricula = linea.substr(p1 + 1, p2 - p1 - 1);
        string materia = linea.substr(p2 + 1, p3 - p2 - 1);
        float nota = stof(linea.substr(p3 + 1));

        lista.push_back(Calificacion(nombre, matricula, materia, nota));
    }

    archivo.close();
}
