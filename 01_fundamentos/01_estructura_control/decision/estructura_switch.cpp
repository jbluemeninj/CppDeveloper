//
// Created by Eleudoro on 24/10/2024.
// Crear un programa que al selecionar un numero del 1 al 7. Te diga el dia.

#include <iostream>
using namespace std;

int main() {

    //Declaracion de Variables
      int num_dia;
      string msg;
    //Entradas
    cout << "Ingrese un numero del 1 al 7: ";
    cin >> num_dia;
    //Proceso
    switch (num_dia) {
        case 1:
            msg = "Lunes";
            break;
        case 2:
            msg = "Martes";
            break;
        case 3:
            msg = "Miercoles";
            break;
        case 4:
            msg = "Jueves";
            break;
        case 5:
            msg = "Viernes";
            break;
        case 6:
            msg = "Sabado";
            break;
        case 7:
            msg = "Domingo";
            break;
        default:
            msg = "Numero invalido";
            break;
    }
    //Salida
    cout << msg;

    return 0;
}

