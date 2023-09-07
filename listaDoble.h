

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

#ifndef  LISTA_DOBLE_H_
#define  LISTA_DOBLE_H_


// Clase de la Lista Doble
class ListaDoble{

  public:
    int fecha;
    string nombre,autor, titular,descripcion,url;
    ListaDoble*siguiente;
    ListaDoble* anterior;
    ListaDoble *primerNodo;
    ListaDoble(int fecha,string autor,string nombre,string titular,string descripcion,string url){
        this->fecha=fecha;
        this->autor=autor;
        this->nombre=nombre;
        this->titular=titular;
        this->descripcion=descripcion;
        this->url=url;

        siguiente=anterior = NULL;
    }

    ListaDoble();//Constructor
    ~ListaDoble();//Destructor

    //Declaracion de los metodos de lista doble

    void insertarFinal(int fecha,string autor,string nombre,string titular ,string descripcion,string url);
      // Explicacion:
      // Este metodo se encarga de insertar noticias a final de la lista doble.

    int  largoLista();
        // Explicacion:
        // Este metodo se encarga de recorrer la lista  desde el primer elemento de la lista hasta
        // el ultimo elemento realizandolo a traves de los nodos.buscar ( int tam, char** palabras);



    ListaDoble * buscarFecha(int fecha);
         // Explicacion:
        //  Este metodo se encarga de buscar la fecha de una noticia  determinada de la lista que se
       //   va recorriendo  hasta encontrar esa fecha.

    void buscar(int tam, char **palabras);
    // Explicacion:
    //  Este metodo se encarga de buscar esa palabra digitada por el usuario en la
    //  lista doble.
    void mostrar() ;
       // Explicacion:
       // Este metodo se encarga de mostrar todas las partes que componen a la noticia que se encuentra en la lista.

    void mostrar5Titulares();
    // Explicacion:
    // Este metodo se encarga unicamente de mostrar solo los primeros cinco titulares que se encuentran
    // en la lista.
    void mostrarTitularPosicion() const;
    // Explicacion:
    // Este metodo se encarga de mostrar solamente los titulares de la noticia y su posicion actual que
    // estos poseen.

    void BorrarNoticia(int tam,char **palabras);
          // Explicacion:
         //  Este metodo se encarga de borrar una noticia de la lista lo cual
        //   lo realiza recorriendo la lista hasta encontrar en este caso el titular que coi

    bool listaVacia(){return primerNodo=nullptr;}
         // Explicacion:
        //  Este metodo se encarga de validar si la lista doble se encuentra vacia o no se encuentra vacia.

};


#endif

