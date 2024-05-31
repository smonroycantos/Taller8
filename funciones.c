#include <stdio.h>
#include "funciones.h"

int x;

void menu (){
    printf("--------Sistema de Inventarios--------\n");
    printf("1. Ingresar producto\n2. Editar producto\n3. Eliminar producto\n4. Lista de productos\n5. Salir\n");
}

int seleccionarOpcion (){
    int x;
    printf("Seleccione una opcion:\n");
    scanf("%d",&x);
    return x;
}

void opciones(x){

}