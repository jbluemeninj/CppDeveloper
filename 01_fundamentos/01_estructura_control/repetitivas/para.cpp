// #Tabla de multiplicar de acuerdo a lo que ingrese el usuario
// Created by Eleudoro on 24/10/2024.
//

#include <iostream>
using namespace std;

int main() {

    //Declaracion de Variables
        int num;
    //Entradas
        cout << "Ingrese un numero: ";
        cin >> num;
        cout << endl;
    //Proceso y Salidas
        for (int i = 1; i <=12; i++) {
            cout << num << " x " << i << " = " << num * i << endl;
        }

    return 0;
}