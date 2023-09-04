//
// Created by aquir on 29/8/2023.
//

#include "arregloInputUsuario.h"




int encontrarCantidadPalabras(char *entrada) {
    //Esta variable se encarga de ir contando la cantidad de palabras digitadas por el usuario
    int cantidad = 1;
    //Se incializa un puntero llamado p que apunta al inicio de la cadena de caracteres.
    char *p = entrada;
    // Este ciclo while se encarga de iniciar un bucle "while" que recorra la cadena de caracteres hasta llegar al final ('\0')

    while (*p != '\0') {
        //Este if se encarga de validar si  el carácter actual es una coma (','), incrementar el contador de palabras

        if (*p == ',') {
            ++cantidad;
        }
        // Mover el puntero "p" al siguiente carácter en la cadena
        ++p;
    }
    // Retornar la cantidad de palabras contadas

    return cantidad;
}

char **generarArreglo(char *entrada, int &tamano) {
    // Esta variable integer se encarga de calcular el tamaño del arreglo llamando a la función "encontrarCantidadPalabras"
    //que cuenta la cantidad de palabras en la cadena y lo almacena en "tamano".
    tamano = encontrarCantidadPalabras(entrada);
    // Esta variable char ** 'arreglo' se encarga de crear un arreglo de punteros al char 'arreglo' con su tamano calculado.
    char **arreglo = new char*[tamano];
    // Inicializar un puntero llamado tokenn para apuntar a la primera palabra en el arreglo
    char *token = entrada;
    // Esta variable integer se encarga de rastrear la posicion actual del arreglo.
    int indice = 0;
    //Este ciclo while se encarga de de recorrer la cadena hasta llegar al final.
    while (*token != '\0') {
        //Este if se encarga de que si el caracter actual papuntado por token tiene una coma ','
        if (*token == ',') {
            *token = '\0';
            arreglo[indice] = entrada;
            entrada = token + 1;
            ++indice;
        }
        ++token;
    }
    //Asignar la última palabra (o la única si no hay comas) al arreglo en la última posición.
    arreglo[indice] = entrada;
     //Retornar el arreglo generado.
    return arreglo;
}
