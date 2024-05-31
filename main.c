#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "funciones.h"

int main() {
    char nombres[20][10];
    int cantidades[20];
    float precios[20];
    int cantidadProductos = 0;
    int opcion,i,j;
    char nombre[50];
    do {
        menu ();
        opcion = seleccionarOpcion();
        switch (opcion) {
            case 1:
                printf("Ingrese el nombre del producto: ");
                scanf("%s", nombres[cantidadProductos]);
                printf("Ingrese la cantidad: ");
                scanf("%d", &cantidades[cantidadProductos]);
                printf("Ingrese el precio: ");
                scanf("%f", &precios[cantidadProductos]);
                cantidadProductos++;
                printf("Producto agregado exitosamente.\n");
                break;
            case 2:
                printf("Ingrese el nombre del producto a editar: ");
                scanf("%s", nombre);
                for (i = 0; i < cantidadProductos; i++) {
                    if (strcmp(nombres[i], nombre) == 0) {
                        printf("Ingrese la nueva cantidad: ");
                        scanf("%d", &cantidades[i]);
                        printf("Ingrese el nuevo precio: ");
                        scanf("%f", &precios[i]);
                        printf("Producto editado exitosamente.\n");
                        break;
                    }
                }
                if (i == cantidadProductos) {
                    printf("Producto no encontrado.\n");
                }
                break;
            case 3:
                printf("Ingrese el nombre del producto a eliminar: ");
                scanf("%s", nombre);
                for (i = 0; i < cantidadProductos; i++) {
                    if (strcmp(nombres[i], nombre) == 0) {
                        for (j = i; j < cantidadProductos - 1; j++) {
                            strcpy(nombres[j], nombres[j + 1]);
                            cantidades[j] = cantidades[j + 1];
                            precios[j] = precios[j + 1];
                        }
                        cantidadProductos--;
                        printf("Producto eliminado exitosamente.\n");
                        break;
                    }
                }
                if (i == cantidadProductos) {
                    printf("Producto no encontrado.\n");
                }
                break;
            case 4:
                printf("\nLista de productos en inventario:\n");
                printf("Nombre\t\tCantidad\tPrecio\n");
                for (i = 0; i < cantidadProductos; i++) {
                    printf("%s\t\t%d\t\t%.2f\n", nombres[i], cantidades[i], precios[i]);
                }
                break;
            case 5:
                printf("Saliendo del sistema.\n");
                break;
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
        }
    } while (opcion != 5);
    getch();
return 0;
}