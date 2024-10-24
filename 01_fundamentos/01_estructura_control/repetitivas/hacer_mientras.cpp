//
// Created by Eleudoro on 24/10/2024.
//


// Hacer un Login

#include <iostream>
using namespace std;

int main() {
    string username_db = "admin";
    string password_db = "12345";
    string username;
    string password;
    bool acceso = false;
    int contador = 3;

    do {
        cout << "Ingrese su nombre de usuario: ";
        cin >> username;
        cout << "Ingrese su contrasenia: ";
        cin >> password;

        if (username == username_db and password == password_db) {
            cout << "Bienvenido al sistema" << endl;
            acceso = true;
        }else {
            --contador;
            cout << "Usuario o contrasenia incorrectos." << "Le quedan " << contador << " intentos" << endl;
            if (contador == 0) {
                cout << "Acceso denegado" << endl;
                break;
            }
        }

    } while (!acceso);

    return 0;
}