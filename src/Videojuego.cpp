//
// Created by Janus on 1/04/2025.
//
#include "Videojuego.h"

Videojuego::Videojuego(string codigo, string nombre, string genero, int nivelDificultad)
    : codigo(codigo), nombre(nombre), genero(genero), nivelDificultad(nivelDificultad) {}

void Videojuego::mostrar() const
{
    cout << "Codigo: " << codigo << ", Nombre: " << nombre
         << ", Genero: " << genero << ", Dificultad: " << nivelDificultad << endl;
}

string Videojuego::getCodigo() const
{
    return codigo;
}

int Videojuego::getNivelDificultad() const
{
    return nivelDificultad;
}
