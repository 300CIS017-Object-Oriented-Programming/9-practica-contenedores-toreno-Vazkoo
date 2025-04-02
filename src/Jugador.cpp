//
// Created by Janus on 1/04/2025.
//
#include <iostream>
#include <iomanip>

#include "Jugador.h"

Jugador::Jugador(string nickname, int nivelRanking)
    : nickname(nickname), nivelRanking(nivelRanking) {}

void Jugador::mostrar() const {
    cout << "Nickname: " << nickname << ", Ranking: " << nivelRanking << endl;
}

void Jugador::inscribir(Videojuego* videojuego) {
    for (const auto& v : videojuegosInscritos) {
        if (v->getCodigo() == videojuego->getCodigo()) {
            cout << "El jugador ya esta inscrito en este videojuego." << endl;
            return;
        }
    }
    videojuegosInscritos.push_back(videojuego);
}

void Jugador::mostrarVideojuegos() const {
    cout << "Videojuegos inscritos por " << nickname << ":" << endl;
    for (const auto& v : videojuegosInscritos) {
        v->mostrar();
    }
}

float Jugador::calcularPromedioDificultad() const {
    if (videojuegosInscritos.empty()) return 0.0;

    int suma = 0;
    for (const auto& v : videojuegosInscritos) {
        suma += v->getNivelDificultad();
    }
    return static_cast<float>(suma) / videojuegosInscritos.size();
}

string Jugador::getNickname() const {
    return nickname;
}
