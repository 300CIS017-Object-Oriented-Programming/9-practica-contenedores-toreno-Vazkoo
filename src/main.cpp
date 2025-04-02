//
// Created by Home on 2/04/2025.
//

#include <iostream>
#include "Torneo.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    Torneo torneo;
    int opcion;
    return 0;

    do {
        cout << "\n--- Menu del Torneo Battle Arena ---\n";
        cout << "1. Registrar videojuego\n";
        cout << "2. Registrar jugador\n";
        cout << "3. Inscribir jugador en videojuego\n";
        cout << "4. Mostrar videojuegos de un jugador\n";
        cout << "5. Calcular promedio de dificultad\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        string codigo, nombre, genero, nickname;
        int nivelDificultad, nivelRanking;

        switch (opcion) {
            case 1:
                cout << "Ingrese codigo: ";
                cin >> codigo;
                cout << "Ingrese nombre: ";
                cin.ignore();
                getline(cin, nombre);
                cout << "Ingrese genero: ";
                cin >> genero;
                cout << "Ingrese nivel de dificultad (1-5): ";
                cin >> nivelDificultad;

                if (nivelDificultad < 1 || nivelDificultad > 5) {
                    cout << "Nivel de dificultad invalido.\n";
                } else {
                    torneo.registrarVideojuego(codigo, nombre, genero, nivelDificultad);
                }
                break;

            case 2:
                cout << "Ingrese nickname: ";
                cin >> nickname;
                cout << "Ingrese nivel de ranking (1-100): ";
                cin >> nivelRanking;

                if (nivelRanking < 1 || nivelRanking > 100) {
                    cout << "Nivel de ranking invalido.\n";
                } else {
                    torneo.registrarJugador(nickname, nivelRanking);
                }
                break;

            case 3:
                cout << "Ingrese nickname del jugador: ";
                cin >> nickname;
                cout << "Ingrese codigo del videojuego: ";
                cin >> codigo;
                torneo.inscribirJugadorEnVideojuego(nickname, codigo);
                break;

            case 4:
                cout << "Ingrese nickname del jugador: ";
                cin >> nickname;
                torneo.mostrarVideojuegosDeJugador(nickname);
                break;

            case 5:
                cout << "Ingrese nickname del jugador: ";
                cin >> nickname;
                torneo.calcularPromedioDificultadJugador(nickname);
                break;

            case 6:
                cout << "Saliendo del sistema...\n";
                break;

            default:
                cout << "Opcion invalida. Intente de nuevo.\n";
        }
    } while (opcion != 6);

    return 0;
}
