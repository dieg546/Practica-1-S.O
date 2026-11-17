Notas importantes para el código en C


Ejecucion del Codigo desde la consola de linux:

- nano hello.c *Para editar el Codigo*
- gcc hello.c -o hello  *Para Compilar el Codigo*
- ./hello *Para Ejecutar el Codigo*

Librerias:



\#include <stdio.h>: Nos permite realizar las operaciones basicas de lectura y escritura

\#include <unistd.h> Fundamental para la programacion de bajo nivel, relacionada con la g3estion de procesos, control de archivos mediante descriptores numericos y llamadas al sistema.


\#include <dirent.h> Permite la exploración de directorios y carpetas


\#include <string.h> Biblioteca para la manipulación de cadenas de caracteres y bloques de memoria


\- ***getcwd()*** Nos lo proporciona la librería <unistd.h> 

dicha función obtiene la ruta absoluta del directorio actual y lo guarda en una variable especificada



Dicha función, devuelve un puntero a path, si ocurre un error, este sera NULL



\- ***struct dirent \*entrada:*** struct dirent nos da la estructura de datos definida por el OS proporcionada por la 

librería <dirent.h> el puntero \*entrada almacenara la dirección de memoria donde se encuentra la información del elemento que esta leyento.



\- ***DIR \*directorio = opendir(".")***  DIR \* es un tipo de dato definido en <dirent.h> el puntero indica que se almacenara

el handle del directorio abierto



opendir(".") Es una función de sistema POSIX que abre el directorio, al indicar "." decimos que el directorio actual.

BUCLE WHILE

readdir(directorio) asigna el resultado a la variable entrada y evalúa que no sea NULL, garantizando que se ejecute tantas veces como elementos en la carpeta existan



en la comparación de cadenas de caracteres "." y ".." eso pasa porque Linux por Defecto, incluye dos entradas ocultas



"." apunta al directorio actual

".." apunta al directorio padre



