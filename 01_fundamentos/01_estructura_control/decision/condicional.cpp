//
// Created by Eleudoro on 24/10/2024.
//Crear un programa que diga la etapa de la vida que se encuentra una persona.
//La persona debe ingresar su año de naciomiento
//

#include <iostream>

using namespace std;


int main() {

    //Declaracion de Variables
      int anio_actual = 2024;
      int anio_nacimiento;
      int edad = 0;
      string etapa;

    //Entrada
      cout<<"Ingresa tu anio de nacimiento: ";
      cin >> anio_nacimiento;
    //Proceso
      edad = anio_actual - anio_nacimiento;

      if(edad >= 0 and edad <=  10) {
            etapa = "Niño";
      } else if (edad > 10 and edad <= 18) {
              etapa = "Adolescente";
      } else if(edad > 18 and edad <= 40 ) {
                etapa = "Adulto";
      }else if (edad > 40) {
            etapa = "Adulto Mayor";
      }else {
            etapa = "Edad no valida";
      }

    //Salida
    cout << "Te encuentras en la etapa de " << etapa << endl;


    return 0;

}


