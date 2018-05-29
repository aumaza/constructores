#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char nombre[50];
    float sueldo;

}eEmpleado;

eEmpleado* new_eEmpleado();

int main()
{
    eEmpleado* miEmpleado;

    miEmpleado = new_eEmpleado();
    printf("%p\n", miEmpleado);
    miEmpleado->id=99;

    //free(miEmpleado);

    printf("\n %d", miEmpleado->id);

    return 0;
}

eEmpleado* new_eEmpleado()
{
    eEmpleado* miEmpleado;
    miEmpleado=(eEmpleado*)malloc(sizeof(eEmpleado));

    return miEmpleado;
}
