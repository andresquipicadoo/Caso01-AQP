//
// Created by Andres on 28/8/2023.
//
#include <iostream>
#include <regex> // Libreria de expresiones regulares usada en este caso para validar el formato de la fecha que en este caso es year/month/day.
#include <string>

using namespace std;

bool fechaValida(string &fecha){
    // Explicacion:
    //Este metodo se encarga de que la fecha cumpla con el formato year/month/day usando una expresion regular para
    //validar que se cumpla el formato.
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
    // Explicacion:
     //Este metodo se encarga de validar que los meses del annio no sean menores que 1 ni mayores que 12
    // se encarga de validar que los dias no sean menores que 1o mayores que 31, validar el mes de febrero solo tenga 28 dias o
    // 29 dias si es bisiesto y de que en caso de los meses que tienen 30 dias no tengan ni un dia mas o un dia menos.

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
    //Explicacion:
    //Este metodo se encarga de mostrar la fecha e indicar si la fecha tiene el formato correcto
    // a traves de un mensaje.
    if (ValidoFormato) {
         cout << "El formato de fecha es correcto."<<endl;
    } else {
         cout << "Error: El formato de fecha es incorrecto."<<endl;
    }
}

