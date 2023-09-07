
#include <iostream>
#include "listaDoble.h"
#include "noticia.h"
#include "news.h"


using namespace std;



int main(){
    Noticia noticias;
    ListaDoble lista;



     //Insertar noticias
    // Este metodo se encarga de agregar una nueva noticia  donde se le
    // pide al usuario su fecha, titular,descripcion de la noticia y url. Por lo que va a ser necesario llamar
    // al metodo de insertar(int fecha,string titular,string descripcion , string url) que se ubica en listaDoble.h.
    cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;

   /* lista.insertarFinal(20230821,"Rhea Mogul","CNN ESPAÑOL","El nuevo mapa nacional de China enfurece a sus vecinos","Filipinas se convirtió en el último país vecino de China ","https://cnnespanol.cnn.com/");
    lista.insertarFinal(20230901, "Mary Gilbert, Nouran Salahieh", "CNN ESPAÑOL", "Harold se debilita a depresión tropical, luego de azotar Texas con inundaciones repentinas y cortes de energía", " La tormenta tropical Harold se debilitó a depresión tropical", "https://cnnespanol.cnn.com/");
    lista.insertarFinal(20230831, " Juan Carlos López", "CNN ESPAÑOL", "Donald Trump se declara inocente de cargos en Georgia", "Se declara inocente", "https://cnnespanol.cnn.com/");
    lista.insertarFinal(20230901, " N/A", "CNN ESPAÑOL", "Rusia reporta nuevos ataques a su territorio y Ucrania se afianza en el sur", "N/A", "https://cnnespanol.cnn.com/");
    lista.insertarFinal(20230831, " Alvaro  Sanchez", "Teletica , Telenoticias TN7", "OIJ busca a sospechosos de entrar a casa y matar a hombre mientras dormía", "El Organismo de Investigación Judicial (OIJ) busca a los sospechosos de ingresar a una casa en Escazú, San José, y matar a un hombre mientras dormía.", "https://www.teletica.com");
    lista.insertarFinal(20230831, "Luis Jimenez", "Teletica", "Caja con escarabajos de Costa Rica puede dejar ganancia de hasta $500 mil en Europa", "El delito ambiental es el cuarto negocio más productivo a nivel internacional, solo superado por la trata de personas, falsificación y drogas.", "https://www.teletica.com");
    lista.insertarFinal(20230831, "Adrian Jimenez", "Teletica, Teletica Deportes TD7", "Alajuelense golea al Motagua en Copa Centroamericana", "Tras el 5-1 ante el Motagua, en el Morara Soto, no quedaron dudas de que Alajuelense fue el mejor equipo del grupo D de la Copa Centroamericana.\n"
                                                                                                                     "", "https://www.teletica.com");
    lista.insertarFinal(20230831, "Juan", "AFP Agencia/Teletica", "Exguarda nazi de 98 años es acusado de complicidad en asesinatos en Alemania", "La fiscalía de Giessen en Alemania anunció el viernes la acusación por complicidad en asesinatos de un exguardia del campo de concentración nazi de Sachsenhausen, al norte de Berlín, de 98 años.", "https://www.teletica.com");
    lista.insertarFinal(20230829, "Juan Jose Herrera", "Teletica, Telenoticias TN7", "Diputados rompen negociación con Hacienda e insistirán por importante rebaja a marchamo", "Los diputados rompieron la negociación que se había acordado con el Ministerio de Hacienda para llegar a un consenso en la rebaja del marchamo 2024.\n"
                                                                                                                                                                                "", "https://www.teletica.com");
*/
    cout<<endl;
    insertarNoticiasEnLista(lista);
    cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Mostrar las noticias por su orden de relevancia"<<endl;
    noticias.mostrarTodo(lista);
    // Mostrar noticias por su relevancia
    // Este metodo se encarga de mostrarle al usuario  todads las  noticias  que se encuentren disponibles de acuerdo al orden de
    // relevancia que estas posean. Por lo va ser necesario llamar al metodo mostrar()
    // que se encuentra en listaDoble.h siendo este ultimo importante para el funcionamiento de este metodo.
    cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;


    cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Mostrar los 5 titulares mas relevantes"<<endl;
    noticias.mostrarPrimerosCinco(lista);
    // Mostraar los primeros 5 titulares por su relevancia
    // Este metodo se encarga de mostarle al usuario las principales cinco noticias que posean mas
    // relevancia tomando en cuenta su prioridad.
    cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;



    cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Buscar noticias"<<endl;
    noticias.buscarNoticias(lista);
    cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;


    cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Reordenar titulares"<<endl;
    noticias.moverArribaAbajo(lista);
    cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;

    cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Eliminar noticias"<<endl;
    noticias.eliminarNoticia(lista);
    cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;






    return 0;

}