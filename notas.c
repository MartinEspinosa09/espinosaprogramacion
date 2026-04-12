#include <stdio.h>

//voy a intnetar hacer un sistema de notas donde ingrese un estudiante, 3 notas del estudiantes y su promedio, seguire añadiendo cosas
//a medida que vaya entendiendo mi codigo

int main(int argc, char const *argv[])
{
    int nota1, nota2, nota3;
    int opcion=1;

    float promedio;

    do
    {
    
    printf ("ingrese la nota 1: \n");
    scanf ("%d",&nota1);

    printf("ingrese la nota 2: \n");
    scanf("%d",&nota2);

    printf("ingrese la nota 3: \n");
    scanf("%d",&nota3);

    promedio=(nota1+nota2+nota3)/3.0;
    printf("el promedio es: %.2f\n", promedio);

    if (promedio<=6)
    {
        printf ("el estudiante ha reprobado");
    }
    else
    {
        printf("el estudiante pasa al siguiente semestre :D");
    }
    
    printf("desea ingresar otro estudiante? SI=1 / NO=0");
    scanf("%d",&opcion);
    
    } while (opcion==1);
    
   
    
    return 0;
}

