//
// Created by Andres on 28/8/2023.
//
#include <iostream>
#include <regex> // Libreria de expresiones regulares usada en este caso para validar el formato de la fecha que en este caso es year/month/day.
#include <string>

using namespace std;

bool fechaValida(string &fecha){
    regex formatoValido("^\\d{4}/(0[1-9]|1[0-2])/([0-2][0-9]|3[0-1])$");
      //Este expresion regular se encarga unicamente de verficar que el formato de la fecha sea
     // year/month/day.
     //Nota: No toma en cuenta bisiestos(esto se implementara mas adelante).
    // Nota: Esta expresion regular no toma en cuenta los dias que posee un mes
    // especifico como es el caso de los meses que tienen 30 dias o el caso de febrero que posee 28 o 29 dias
    // asume que todos los meses tienen 31 dias por lo que mas adelante se implementara un metodo que valide esto.
    return regex_match(fecha,formatoValido);

}
bool esBisiesto(int annio){
    // Este metodo se encarga de validar si el annio es bisiesto.
    return (annio % 4 == 0 && annio % 100 != 0) || (annio % 400 == 0);
}
bool DiasMesesValidos(int annio,int mes,int dia){
    //Este if valida que los annios no sean menores que 0 que los meses no sean menores 1 y ni mayores que 13 ni que los
    // dias no sean menores que 1.
    if (annio<0 ||mes <1||mes >12 ||dia <1){
        return false;
    }
    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
        return false;
    }
    if (mes == 2) {
        if (esBisiesto(annio)) {
            if (dia > 29) {
                return false;
            }
        } else {
            if (dia > 28) {
                return false;
            }
        }
    }
    return dia <= 31;

}
void MostrarResultadoFecha(bool ValidoFormato) {
    if (ValidoFormato) {
         cout << "El formato de fecha es correcto."<<endl;
    } else {
         cout << "Error: El formato de fecha es incorrecto."<<endl;
    }
}

