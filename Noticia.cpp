//
// Created by aquir on 1/9/2023.
//

#include "Noticia.h"
#include "arregloInputUsuario.h"

void Noticia::eliminarNoticia(ListaDoble& lista){

// Explicacion general:
    // Este metodo se encarga de eliminar la noticia realizandolo de la sigiuente manera primero se le pide al usuario que digite
    // las palabras las cuale s se alamacenan en un arreglo posteriormente esas palabras se compararan con el titular que es un elemento
    // de la lista doble y si existe una coincidencia entre las palabras y el titular se elimina la noticia.
    // ---------------------------------------------------------------------------------------------------------------------------------------------
    //Exlicacion detallada:
    // Declaracion de la variable entrada que es un char que de encarga de almacenar las palabras digitadas por el usuario que tiene un maximo
    // de 9000 palabras de almacenamiento;
    char entrada[9000];
    // Solicitar al usuario las palabras separadas por coma
    cout << "Ingrese las palabras separadas por coma: ";
    // Lectura de esas palabras digitadas por el usuario
    cin.getline(entrada, sizeof(entrada));
    // Declaracion de la variable tamano que corresponde a un intiger para ir almacenando el tamano de las palabras
    // digitadas por el usuario
    int tamano;
    // Declaración de un arreglo de punteros a caracteres para almacenar las palabras separadas
    char** palabras = generarArreglo(entrada, tamano);
    // Llamada  del metodo BorrarNoticia() de listaDoble.h para que se puedan borrar las noticias con base a su titular.
    lista.BorrarNoticia(tamano, palabras);
    // Mensaje que indica que las noticias han sido borradas
    cout << "Noticias eliminadas según las palabras digitadas por el usuario." << endl;
    // Mensaje para mostrar las noticias(titulares) que quedaron y para comprobar si realmente se llegaron a eliminar
    // se llama al metodo mostrarTitularPosicion().
    cout << "Las noticias(titulares) que quedaron son :" << endl;
    lista.mostrarTitularPosicion();



}
void Noticia::mostrarTodo(ListaDoble &lista) {
    // Explicacion:
    // Este metodo se encarga de mostrar el Autor, titular,descripcion y url de la noticia
    ListaDoble* nodoActual = lista.primerNodo;

    while (nodoActual != nullptr) {

        cout << "Autor: " << nodoActual->autor << endl;
        cout << "Titular: " << nodoActual->titular << endl;
        cout << "Descripción: " << nodoActual->descripcion <<endl;
        cout << "URL: " << nodoActual->url << endl;


        nodoActual = nodoActual->siguiente;
    }

}
void Noticia::mostrarPrimerosCinco(ListaDoble &lista) {
    // Explicacion:
    // Este metodo es el encargado de recorrer la lista doble y mostrar unicamente los 5 primeros titulares más relevantes.
    ListaDoble* actual = lista.primerNodo;
    int posicion = 1;

    while (actual != nullptr && posicion <= 5) {
        cout << "Posición " << posicion << ": " << actual->titular << endl;
        actual = actual->siguiente;
        posicion++;
    }
}
void Noticia::mostrarTitularesConPosicion(ListaDoble& lista) {
    // Explicacion:
    // Este metodo es el encargado de recorrer la lista doble iniciando desde el primer nodo de la lista doble y asi
    // sigue avanzando hasta el ultimo nodo de la lista doble su principal funcion es mostrar unicamente el titular de la noticia y
    // la posicion que posee ese titular en la lista.
    ListaDoble* actual = lista.primerNodo;
    int posicion = 1;

    while (actual != nullptr) {
        cout << "Posición actual " << posicion << ": " << actual->titular << endl;
        actual = actual->siguiente;
        posicion++;
    }
}
void Noticia::moverArribaAbajo(ListaDoble&lista) {
    //Explicacion General: Este metodo es el encargado de subir o bajar de relevacia un titular donde se le va
    // donde el usuario va tener la posibilidad de elejir 3 opciones la primera corresponde a +(subir de relevancia
    // donde se le va a pedir la posicion que posee actualmente el titular y posteriormente se le pide la cantidad de opciones
    // a subir 'se indica de la siguiente manera +6 siempre poniendo el simbolo + adelante de la cantidad de posciones a subir si no se
    //  se pone este signo adelante no se realiza la accion' , la segunda de corresponde a bajar de posicion donde se le piden los mismos datos
    // la posicion actual del titular en la lista y la cantidad de posiciones   a bajar -(bajar de relevancia
    //  donde se le va a pedir la posicion que posee actualmente el titular y posteriormente se le pide la cantidad de opciones
    //  a bajar 'se indica de la siguiente manera -3 siempre poniendo el simbolo - adelante de la cantidad de posciones a bajar
    //   no se realiza la accion' y finalmente la ultima opcion corresponde a salir del menu.
    // ---------------------------------------------------------------------------------------------------------------------------------------------
    //Explicacion detallada:
    // Variable char que le va permitir al usuario ejier entre las opciones subir(+), bajar(-)
    char opcion;
    // Mensaje donde se le pide al usuario que seleccione una opcion.
    cout << "Elija una opcion (+ para subir , - para bajar ): ";
    // Lectura de la opcion elejida por el usuario.
     cin >> opcion;
    // Este if se encarga de validar que la opcion este dentro del rango y que sea correcta en caso de que no sea correcta
    // se mostrara un mensaje de error.
    if (opcion == '+' || opcion == '-') {
        // Llamada de la funcion mostrarTitularesConPosicion()   para mostrar los titulares y la posicion actual que estos poseen.
        mostrarTitularesConPosicion(lista);
        // Esta variable se encarga de almacenar la posicion actual que posee ese titular.
        int posicionActual;
        // Mensaje para pedirle al usuario la posicion actual que posee el titular en la lista.
        cout << "Digite la posición actual del titular: ";
        // Lectura de la posicion actual del titular digitada por el usuario.
        cin >> posicionActual;
        // Esta variable integer se encarga de ir almacenando la cantidad de posiciones que va digitando el usuario.
        int cantidad;
        // Mensaje para pedirle al usuario la cantidad de posiciones para cambiar la posicion de ese titular ya sea
        // para subirlo o bajarlo de posicion
        // Nota : Si si se quiere subir o bajar la posicion de un titular se tiene que digitar de esta manera : por ejemplo
        // +7(subir) o -3(bajar) si no se pone ya sea el signo de (+ o -) antes del numero "No se realiza la accion".
        cout << "Digite la cantidad de posiciones ya sea para subir o bajar de posicion un titular ";
        // Estos dos ifs  determinan  si el usuario está subiendo o bajando relevancia un titular.
        if (opcion == '+') {
            // Mensaje para indicar subir de posicion un titular
             cout << "Subir de posicion: ";
             cin >> cantidad;
        } else {
            //Mensaje para indicar bajar de posicion un titular
             cout << "Bajar de posicion: ";
             cin >> cantidad;
            if (cantidad < 0) {
                cantidad = -cantidad;
            }
        }
        ListaDoble* actual = lista.primerNodo;
        //Esta variable se encarga de ir llevando control de la posicion actual que posee el titular mientras se va recorriendo
        // la lista de titulares
        int posicion = 1;
        //Este ciclo while se  encarga de ir recorriendo la lista doble
        while (actual != nullptr && posicion < posicionActual) {
            actual = actual->siguiente;
            posicion++;
        }
        //Este if se encarga de verificar que si se llego a encontrar un nodo valido en la posicion
        // especificada por el usuario.
        if (actual != nullptr) {
            // Este if se encarga de remover el nodo actual de las lista(titular)
            if (actual->anterior) {
                actual->anterior->siguiente = actual->siguiente;
            } else {
                lista.primerNodo = actual->siguiente;
            }
            // Este if se encarga de verificar si el nodo llamado actual posee un nodo siguiente.
            if (actual->siguiente) {
                actual->siguiente->anterior = actual->anterior;
            }
            // Esta variable integer se encarga de calcular la nueva posicion que va a tener el titular en la lista.
            int nuevaPosicion = (opcion == '+') ? (posicionActual - cantidad) : (posicionActual + cantidad);
            // Este if se encarga de volver a insertar el nodo en la nueva posición
            if (nuevaPosicion < 1) {
                // Insertar el nodo en la nueva posición (al principio).
                actual->anterior = nullptr;
                actual->siguiente = lista.primerNodo;
                lista.primerNodo->anterior = actual;
                lista.primerNodo = actual;
            } else {
                // Buscar la nueva posición para el titular.
                ListaDoble* newCurrent = lista.primerNodo;
                int newposicion = 1;
                //Este ciclo while se encarga de buscar la nueva posicion para el titular.
                while (newCurrent != nullptr && newposicion < nuevaPosicion) {
                    newCurrent = newCurrent->siguiente;
                    newposicion++;
                }
                // Este if se encarga de corroborar si 'newcurrent' es un puntero que apunta a un nodo en la lista
                if (newCurrent != nullptr) {
                    // En este caso la variable actual apunta hacia anterior de lista doble
                    // para insetarlo en la nueva posicion.
                    actual->anterior = newCurrent->anterior;
                    actual->siguiente = newCurrent;
                    //Este if se encarga de verifiacar si hay un nodo anterior y lo actualiza
                    if (newCurrent->anterior) {
                        newCurrent->anterior->siguiente = actual;
                    } else {
                        lista.primerNodo = actual;
                    }
                    newCurrent->anterior = actual;
                } else {
                    // Si la nueva posición del titular está más allá del final de la lista, se coloca al final donde termina la lista.
                    ListaDoble* last = lista.primerNodo;
                    while (last->siguiente != nullptr) {
                        last = last->siguiente;
                    }

                    actual->anterior = last;
                    actual->siguiente = nullptr;
                    last->siguiente = actual;
                }
            }
            // Llamada de la funcion mostrarTitularesConPosicion() de listaDoble.h  para mostrar los titulares y la posicion actual que estos poseen.
            // ademas sirve para combrobar si realmente los titulares subieron o bajaron de posicion.
            lista.mostrarTitularPosicion();
        } else {
            // Mensaje para indicar que la posicion digitada no es valida.
            cout << "Posición no válida." << endl;
        }
    } else {
        // Mensaje de error si la opcion digita no es (+ - o S(salir))
        cout << "Opción no válida." << endl;
    }
}

void Noticia:: buscarNoticias(ListaDoble& lista) {
    // Explicacion general:
    // Este metodo se encarga de buscar una noticia  la noticia realizandolo de la sigiuente manera primero se le pide al usuario que digite
    // las palabras las cuales se alamacenan en un arreglo posteriormente esas palabras se compararan con el titular que es un elemento
    // de la lista doble y si existe una coincidencia se muestra el tiular que mas coincida  si no se encuentra ninguna coincidencia se muestra
    // un mensaje de error indicando que no hay coincidencias.
    // ---------------------------------------------------------------------------------------------------------------------------------------------
    // Explicacion detallada:
    // Declaracion de la variable entrada que es un char que de encarga de almacenar las palabras digitadas por el usuario que tiene un maximo
    // de 9000 palabras que son digitadas por el usuario de almacenamiento;
    char* entrada = new char[9000];
    //  Arreglo de punteros a caracteres para almacenar las palabras separadas por coma.
    char** palabras = nullptr;
    // Variable intiger que cumple la funcion de contador de las palabras digitadas por el usuario.
    int tamano = 0;
    // Solicitar al usuario las palabras separadas por coma
    cout << "Digite cada palabra separrada por una coma ";
    // Lectura de esas palabras digitadas por el usuario
    cin>>entrada;
    // Generar el arreglo de palabras utilizando la función generarArreglo() de arregloInputUsuario.h
    palabras = generarArreglo(entrada, tamano);
    // Variable intiger que es un contador cuya principal funcion es ir acumulando el numero de coincidencias que de palabras
    // digitadas por el usuario comparando el titular.
    int maxCoincidencias = 0;
    // Esta variable se encarga de ir almacendo el titular que posea mas coincidencias
    string mejorTitular;
    // Este ciclo for tiene como funcion principal iterar a través de las palabras ingresadas por el usuario separadas por coma.
    for (int i = 0; i < tamano; i++) {
        ListaDoble* aux = lista.primerNodo;
        // Este ciclo while tiene como funcion principal ir recorriendo la lista doble
        while (aux != nullptr) {
            // Esta variable intiger se encarga de comprobar si esas palabras digitadas por el usuario se encuentran
            // en el titular que es un elemento de la lista doble.
            // Se usa la función .find() para buscar esa palabra ingresada en el titular de la noticia
            int coincidencias = aux->titular.find(palabras[i]) != string::npos;
            // Si el número de coincidencias es mayor que el máximo  hasta lo encontrado en ese momento, se  actualizan los valores.
            if (coincidencias > maxCoincidencias) {
                maxCoincidencias = coincidencias;
                mejorTitular = aux->titular;
            }
            aux = aux->siguiente;
        }
    }
    //Este if se encarga de inidcar si se encontraron coincidencias
    if (maxCoincidencias > 0) {
        // Mensaje que sencarga de mostrar el titular que mas coincide de acuerdo con las palabras digitadas por el usuario.
        cout << "El titular que coincide es: " << mejorTitular <<endl;
    } else {

        // Si no se encontro una coincidencia entre la palabra digitada por el usuario y el titular se muestra un mensaje de error indicando
        // que no se encontro ninguna coincidencia.
        cout << "ERROR, No se encontro ningun titular que coincida " << endl;
    }
    // Llamada  del metodo Buscar() de listaDoble.h para que se pueda hacer efectiva la  busqueda  de  las noticias con base a su titular.
    lista.buscar(tamano,palabras);

}



