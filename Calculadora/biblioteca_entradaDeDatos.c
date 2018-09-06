#include <stdint.h>
#include <stdio.h>
#include "biblioteca_entradaDeDatos.h"

int seleccionDeOpcion(void)
{
    int opcion;
    printf("\nIngrese una opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

float ingresoNumeroFlotante(char texto[])
{
    float numeroFlotante;
    printf("%s", texto);
    scanf("%f", &numeroFlotante);

    return numeroFlotante;
}
