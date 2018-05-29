#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char nombre[50];
    float sueldo;

}eEmpleado;

eEmpleado* new_eEmpleado();
eEmpleado* new_eEmpleado_parametros(int id, char* nombre, float sueldo);

int main()
{
    eEmpleado* miEmpleado;
    //eEmpleado* otroEmpleado;

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

eEmpleado* new_eEmpleado_parametros(int id, char* nombre, float sueldo)
{
    eEmpleado* miEmpleado;
    miEmpleado=new_eEmpleado();

    if(miEmpleado!=NULL)
    {
        miEmpleado->id=id;
        strcpy(miEmpleado->nombre, nombre);
        miEmpleado->sueldo=sueldo;
    }

    return miEmpleado;
}
