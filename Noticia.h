//
// Created by aquir on 1/9/2023.
//

#ifndef CASO1AQP_NOTICIA_H
#define CASO1AQP_NOTICIA_H

#include <iostream>
#include "listaDoble.h"


class Noticia {
  public:

    void buscarNoticias(ListaDoble& lista);
    void eliminarNoticia(ListaDoble& lista);
    void moverArribaAbajo(ListaDoble&lista);
    void mostrarTitularesConPosicion(ListaDoble& lista);
    void mostrarPrimerosCinco(ListaDoble&lista) ;
     void mostrarTodo(ListaDoble&lista);

    // Nota : El metodo para insertar noticias se encuentra implementado en listaDoble.cpp y declarado en listaDoble.h




};


#endif //CASO1AQP_NOTICIA_H
