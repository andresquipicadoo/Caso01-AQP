//
// Creado por Andres en el 26/8/2023.
//
#include "listaDoble.h"
#include "json.hpp"

using json = nlohmann::json;

ListaDoble::ListaDoble() { //Constructor de la lista doble.
   primerNodo = NULL;
}

ListaDoble::~ListaDoble(){ // Destructor de la lista doble.
    ListaDoble* aux;
    while(primerNodo){
        aux = primerNodo;
        primerNodo = primerNodo -> siguiente;
        delete aux;

    }
}
int ListaDoble::largoLista() {
    // Explicacion:
    // Este metodo se encarga de recorrer la lista  desde el primer elemento de la lista hasta
    // el ultimo elemento realizandolo a traves de los nodos.
    int contador=0;
    ListaDoble*aux=primerNodo;
    if(listaVacia()){
        return contador;
    }
    else{
        while(aux !=nullptr){
            aux=aux->siguiente;
            contador++;
        }
        return contador;
    }

}
void ListaDoble::mostrar() {
    // Explicacion:
    // Este metodo se encarga  de mostrar todas las noticias  de la lista.
    ListaDoble* actual = primerNodo;
    while (actual) {
        cout << "Fecha: " << actual->fecha << endl;
        cout << "Autor: " << actual->autor << endl;
        cout << "Nombre del medio de comunicacion o noticiero: " << actual->nombre << endl;
        cout << "Titular: " << actual->titular << endl;
        cout << "Descripción: " << actual->descripcion <<endl;
        cout << "URL: " << actual->url  <<endl;
        actual = actual->siguiente;
    }
}
void ListaDoble::mostrarTitularPosicion() const {
    // Explicacion:
    // Este metodo se encarga de mostrar solamente los titulares de la noticia y su posicion actual que
    // estos poseen.
    ListaDoble* current = primerNodo;
    int posicion = 1;

    while (current) {
        cout <<  posicion << ": " << current->titular << endl;
        current = current->siguiente;
        posicion++;
    }


}
void ListaDoble::insertarFinal(int fecha,string autor,string nombre,string titular ,string descripcion,string url) {
    // Explicacion:
    // Este metodo se encarga de insertar noticias a final de la lista doble.
    ListaDoble* nuevoNodo = new ListaDoble(fecha, autor, nombre, titular, descripcion, url);

    if (!primerNodo) {
        primerNodo = nuevoNodo;
    } else {
        ListaDoble* temp = primerNodo;
        while (temp->siguiente) {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevoNodo;
        nuevoNodo->anterior = temp;
    }


}

ListaDoble * ListaDoble::buscarFecha(int fecha) {
    // Explicacion:
    //  Este metodo se encarga de buscar la fecha de una noticia  determinada de la lista que se
    //  va recorriendo  hasta encontrar esa fecha.Este metodo va ser importante para el metodo buscarNoticia() de noticias.h.
    ListaDoble*aux=primerNodo;
    while (aux) {
        if (aux->fecha== fecha)
            return aux;
        aux = aux->siguiente;
    }


    return nullptr;


}
void ListaDoble::buscar(int tam, char **palabras){
    // Explicacion:
    //  Este metodo se encarga de buscar esa palabra digitada por el usuario en la
    //  lista doble.
    // Se usa la función .find() para buscar esa palabra ingresada en el titular de la noticia

    for (int i = 0; i < tam; i++) {
        bool coincidenciaEncontrada = false;
        ListaDoble* aux = primerNodo;

        while (aux != nullptr) {
            if (aux->titular.find(palabras[i]) != std::string::npos) {
                coincidenciaEncontrada = true;
                aux = aux->siguiente;
            } else {
                aux = aux->siguiente;
            }
        }

        if (!coincidenciaEncontrada) {
            break;
        }
    }
}


void ListaDoble::BorrarNoticia(int tam,char** palabras) {
    //  Explicacion:
    //  Este metodo se encarga de borrar una noticia buscando en la lista esa lista de palabras
    //  separadas por coma digitadas por el usuario y si hay coincidencia entre las palabras digitads
    //  por el usuario y el titular se borra la noticia de la lista.
    // Se usa la función .find() para buscar esa palabra ingresada en el titular de la noticia
    for (int i = 0; i < tam; i++) {
        ListaDoble* aux = primerNodo;
        while (aux != nullptr) {
            if (aux->titular.find(palabras[i]) != std::string::npos) {
                ListaDoble* temp = aux;
                if (aux->anterior) {
                    aux->anterior->siguiente = aux->siguiente;
                } else {
                    primerNodo = aux->siguiente;
                }
                if (aux->siguiente) {
                    aux->siguiente->anterior = aux->anterior;
                }
                aux = aux->siguiente;
                delete temp;
            } else {
                aux = aux->siguiente;
            }
        }
    }
}



void ListaDoble::mostrar5Titulares()  {
    // Explicacion:
    // Este metodo se encarga unicamente de mostrar solo los primeros cinco titulares que se encuentran
    // en la lista.
    ListaDoble* aux = primerNodo;
    int contador = 0;
    while (aux && contador < 5) {

        cout << "Titular: " << aux->titular << endl;

        aux = aux->siguiente;
        contador++;

    }
}