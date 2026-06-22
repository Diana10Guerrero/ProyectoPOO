#include "Sistema.h"

// Constructor
Sistema::Sistema() {
    cargarArchivo();
}

// Menú principal
void Sistema::menu() {
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

// Registrar estudiante
void Sistema::registrarEstudiante() {
    string nombre, materia, matricula;
    float seccion;

    cout << "\n--- REGISTRO DE ESTUDIANTE ---\n";

    cout << "Nombre: ";
    getline(cin, nombre);

    cout << "Materia: ";
    getline(cin, materia);

    cout << "Matrícula: ";
    getline(cin, matricula);

    cout << "Sección: ";
    cin >> seccion;
    cin.ignore();

    listaEstudiantes.push_back(Estudiante(nombre, materia, matricula, seccion));

    cout << "Estudiante registrado.\n";
}

// Registrar profesor
void Sistema::registrarProfesor() {
    string nombre, materia;
    float codigo;

    cout << "\n--- REGISTRO DE PROFESOR ---\n";

    cout << "Nombre: ";
    getline(cin, nombre);

    cout << "Materia: ";
    getline(cin, materia);

    cout << "Código: ";
    cin >> codigo;
    cin.ignore();

    listaProfesores.push_back(Profesor(nombre, materia, codigo));

    cout << "Profesor registrado.\n";
}

// Registrar materia
void Sistema::registrarMateria() {
    string nombre;
    float codigo, creditos;

    cout << "\n--- REGISTRO DE MATERIA ---\n";

    cout << "Nombre: ";
    getline(cin, nombre);

    cout << "Código: ";
    cin >> codigo;

    cout << "Créditos: ";
    cin >> creditos;
    cin.ignore();

    listaMaterias.push_back(Materia(nombre, codigo, creditos));

    cout << "Materia registrada.\n";
}

// Registrar calificación
void Sistema::registrarCalificacion() {
    if (listaEstudiantes.empty() || listaProfesores.empty() || listaMaterias.empty()) {
        cout << "Debe registrar estudiante, profesor y materia primero.\n";
        return;
    }

    int e, p, m;
    float nota;

    cout << "\n--- REGISTRO DE CALIFICACIÓN ---\n";

    cout << "Seleccione estudiante:\n";
    for (int i = 0; i < listaEstudiantes.size(); i++)
        cout << i << ". " << listaEstudiantes[i].get_Nombre() << endl;
    cin >> e;

    cout << "Seleccione profesor:\n";
    for (int i = 0; i < listaProfesores.size(); i++)
        cout << i << ". " << listaProfesores[i].get_nombre() << endl;
    cin >> p;

    cout << "Seleccione materia:\n";
    for (int i = 0; i < listaMaterias.size(); i++)
        cout << i << ". " << listaMaterias[i].get_nombre() << endl;
    cin >> m;

    cout << "Nota: ";
    cin >> nota;
    cin.ignore();

    listaCalificaciones.push_back(
        Calificacion(listaEstudiantes[e], listaProfesores[p], listaMaterias[m], nota)
    );

    cout << "Calificación registrada.\n";
}

// Mostrar calificaciones
void Sistema::verCalificaciones() {
    cout << "\n--- LISTA DE CALIFICACIONES ---\n";

    if (listaCalificaciones.empty()) {
        cout << "No hay calificaciones registradas.\n";
        return;
    }

    for (auto &c : listaCalificaciones)
        c.mostrar();
}

// Guardar archivo
void Sistema::guardarArchivo() {
    ofstream archivo("calificaciones.txt");

    for (auto &c : listaCalificaciones)
        c.serializar(archivo);

    archivo.close();
    cout << "Datos guardados.\n";
}

// Cargar archivo
void Sistema::cargarArchivo() {
    ifstream archivo("calificaciones.txt");
    if (!archivo.is_open()) return;

    archivo.close();
}
