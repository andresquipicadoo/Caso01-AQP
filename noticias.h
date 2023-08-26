


#include <iostream>
using namespace std;

class noticia{




    void MenuPrincipal(){

        //Este metodo se encarga de mostrarle al usuario las opciones que se encuentran disponibles en el programa
        // con la posibilidad de que este pueda seleccionar la opcion que desee. Donde se le va a solicitar que digite un numero del 1
        // al 7 siendo esta ultima opcion correspondiente a salir del programa.En caso que se digite un numero que no se encuentre en
        // este rango se e va solicitar al usuario que seleccione una opcion valida nuevamente asi hasta cuando este seleccione una opcion
        // dentro del rango.
    }
    void mostrarXRelevancia(){
        // Este metodo se encarga de mostrarle al usuario  todads las  noticias  que se encuentren disponibles de acuerdo al orden de
        // relevancia que estas posean. Por lo va ser necesario llamar al metodo mostrar()
        // que se encuentra en listaDoble.h siendo este ultimo importante para el funcionamiento de este metodo.


    }
    void agregarNoticia(int fecha,string titular,string cuerpo , string url){
        // Este metodo se encarga de agregar una nueva noticia  donde se le
        // pide al usuario su fecha, titular,cuerpo de la noticia y url. Por lo que va a ser necesario llamar
        // al metodo de insertar(int fecha,string titular,string cuerpo , string url) que se ubica en listaDoble.h.
    }

    void mostrarTitulares(){
        //Este metodo se encarga de mostrar el titular la noticia donde se tiene
        //que buscar una palabra digitada por el usuario en la lista.Por lo va a ser necesario
        // llamar a los metodos buscar(string palabra) y mostrar() de listaDoble.h.
        //En caso de que no se encuentre una noticia con palabra digitada(titular) se mostrara un
        //mensaje al usuario de que "No existe la notica debido aque la palabra digitada no coincide con las noticias disponibles"

    }
    
    void buscarNoticia(string palabra, int fecha){
        //Este metodo encarga de mostrarle al usuario una lista de noticias 
        // de su interes solictandole la fecha y dar una palabra del titular y de esta
        //forma muestra todos los titulares que comienzen con esa palabra.Por lo que
        // va ser necesario llamar al metodo de buscar(string palabra) y buscarFecha(int fecha) de listaDoble.h.
        //En caso de que no se encuentre una noticia con la fecha digitada y palabra digitada(titular) se mostrara un
        //mensaje al usuario de que "No hay resultados que coincidan con su busqueda".
    }

    void eliminarNoticia(){
        //Este metodo se encarga de eliminar la noticia donde se tiene que buscar una palabra digitada por el usuario en la lista
        //Por lo va a ser necesario llamar a los metodos borrarElemento(string palabra) y buscar(string palabra) de listaDoble.h.
        //En caso de que no se encuentre una noticia con palabra digitada(titular) se le mostrara un
        //mensaje al usuario de que "No se puede borrar la notica debido a que la palabra digitada no coincide con las noticias disponibles".
    }
    void  reubicarTitular(){
        // Este metodo le da la posibilidad al usuario de subir o bajar de relevancia una noticia
        // a gusto del usuario, esto se logra indicando la posicion que posee la noticia actualmente en la lista.
        // .Adicionalmente tiene dos 2 opciones para seleccionar en este metodo la primera es +y que
        // le va permitir subir un titular de posicion y finalmente -Y que le permite bajar de posicion
        // un titular.Va ser necesario llamar  a los metodos de mostrarPosicion(int posicion) y buscarPoscion(int dato)
        // de listaDoble.h.

    }
    void mostrarCinco(){
        // Este metodo se encarga de mostarle al usuario las principales cinco noticias que posean mas
        // relevancia tomando en cuenta su prioridad.Por lo que se va a requerir llamar al metodo mostrar() de listaDoble.h


    }

};