//
// Created by aquir on 1/9/2023.
//

#ifndef NOTICIA_H
#define NOTICIA_H

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

};


#endif
