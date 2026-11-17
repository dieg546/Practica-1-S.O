#include <stdio.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>

//Script Realizado por:
//Diego Sanchez 27.311.730
//Leiver Garcia 28.131.245

int main(){

	//Variables
        char path[1084];
        struct dirent *entrada;
        int contador_archivos = 0;

        //Abrimos el Directorio
        DIR *directorio = opendir(".");


	//Obtenemos la ruta actual

	if(getcwd(path, sizeof(path)) == NULL){

		printf("Hubo un error al buscar la ruta");
		return 1;

	}

        //Obtenemos la ruta actual

        if(getcwd(path, sizeof(path)) == NULL){

                printf("Hubo un error al buscar la ruta");
                return 1;

        }

        //Condicion para saber si el directorio existe
        if(directorio == NULL){

                perror("No se pudo abrir el directorio");
                return 1;
        }

        printf("Ruta Actual: %s \n", path);
        printf("****LISTADO DE ARCHIVOS****\n");

        //Iteramos sobre la variable entrada. readdir hace el trabajo de ir archivo por archivo.
        while((entrada = readdir(directorio)) != NULL){

                //Permite ignorar la carpeta actual "." y la carpeta padre ".." para imprimir solo los archivos.
                if(strcmp(entrada->d_name, ".") !=0 && strcmp(entrada->d_name, "..") != 0){

                        printf("- %s\n", entrada->d_name);
                        contador_archivos++;

                }

        }

        //Importante cerrar el archivo al terminar las operaciones
        closedir(directorio);

        printf("La cantidad de archivos es %d\n", contador_archivos);
        return 0;
}

