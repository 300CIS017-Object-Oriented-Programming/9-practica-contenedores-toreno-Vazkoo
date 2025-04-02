//
// Created by Janus on 1/04/2025.
//

#include "Torneo.h"

Torneo::~Torneo() {
    for (auto& v : videojuegosDisponibles) delete v.second;
    for (auto& j : jugadoresRegistrados) delete j.second;
}

void Torneo::registrarVideojuego(string codigo, string nombre, string genero, int nivelDificultad) {
    if (videojuegosDisponibles.count(codigo)) {
        cout << "El videojuego con codigo " << codigo << " ya existe." << endl;
        return;
    }
    videojuegosDisponibles[codigo] = new Videojuego(codigo, nombre, genero, nivelDificultad);
}

void Torneo::registrarJugador(string nickname, int nivelRanking) {
    if (jugadoresRegistrados.count(nickname)) {
        cout << "El jugador con nickname " << nickname << " ya esta registrado." << endl;
        return;
    }
    jugadoresRegistrados[nickname] = new Jugador(nickname, nivelRanking);
}

void Torneo::inscribirJugadorEnVideojuego(string nickname, string codigo) {
    if (!jugadoresRegistrados.count(nickname)) {
        cout << "El jugador no esta registrado." << endl;
        return;
    }
    if (!videojuegosDisponibles.count(codigo)) {
        cout << "El videojuego no existe." << endl;
        return;
    }
    jugadoresRegistrados[nickname]->inscribir(videojuegosDisponibles[codigo]);
}

void Torneo::mostrarVideojuegosDeJugador(string nickname) const {
    if (!jugadoresRegistrados.count(nickname)) {
        cout << "El jugador no esta registrado." << endl;
        return;
    }
    jugadoresRegistrados.at(nickname)->mostrarVideojuegos();
}

void Torneo::calcularPromedioDificultadJugador(string nickname) const {
    if (!jugadoresRegistrados.count(nickname)) {
        cout << "El jugador no esta registrado." << endl;
        return;
    }
    float promedio = jugadoresRegistrados.at(nickname)->calcularPromedioDificultad();
    cout << "Promedio de dificultad de los videojuegos de " << nickname << ": " << promedio << endl;
}
