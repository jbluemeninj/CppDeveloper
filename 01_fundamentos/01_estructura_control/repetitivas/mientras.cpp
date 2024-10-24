// Created by Eleudoro on 24/10/2024.

#include <iostream>
using namespace std;

int main () {
    //1. Escribir un programa que solicite ingresar la nota de 5 alumnos,
    //el programa debe informar de cuantos han aprobado y cuantos han suspendido.

    int nota, aprobados = 0, suspendidos = 0;
    int i = 1;

    while(i <= 5) {
        cout << "Nota del ALO " << i << " : ";
        cin >> nota;

        if (nota >= 11) {
            aprobados++;
        } else {
            suspendidos++;
        }
        i++;
    }

    cout << "Alumnos aprobados: " << aprobados << endl;
    cout << "Alumnos suspendidos: " << suspendidos << endl;
    cout << "----------------------------------" << endl;



    return 0;
}