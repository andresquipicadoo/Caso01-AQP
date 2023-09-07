cmake_minimum_required(VERSION 3.25)
project(caso1AQP)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)



add_executable(caso1AQP

        prueba.cpp
        listaDoble.cpp
        fecha.cpp
        arregloInputUsuario.cpp
        Noticia.cpp
        news.cpp

)
target_link_libraries(caso1AQP curl)
