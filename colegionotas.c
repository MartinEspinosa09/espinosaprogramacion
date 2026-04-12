#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numEstudiantes, numAsignaturas;
    float sumaEstudiante, sumaAsignatura;
    float notas[5][3];

    for (int i = 0; i < 5; i++)
    {
        printf("REGISTRO ESTUDIANTE %d \n", i+1);
        for (int j = 0; j < 3; j++)
        {
            do
            {
                printf("ingresa una nota de la asignatura %d \n", j+1);
                scanf(" %f", &notas[i][j]);

                if (notas[i][j]<0 || notas[i][j]>10)
                {
                    printf("ERROR: LA NOTA DEBE ESTAR EN EL RANGO DE 0 HASTA 10");
                }
                
            } while (notas[i][j]<0 || notas[i][j]>10);
            
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        sumaEstudiante=0;
        printf("\n estudiante %d:\n", i+1);

        for (int j = 0; j < 3; j++)
        {
            sumaEstudiante += notas[i][j];
        }
        
        printf("el promedio de los estudiantes es: %.2f\n", sumaEstudiante/3.0);

    }
    
    for (int j = 0; j < 3; j++)
    {
        sumaAsignatura=0;
        printf("\n Asignatura %d:\n", j+1);

        for (int i = 0; i < 5; i++)
        {
            sumaAsignatura += notas[i][j];
        }
        
        printf("el promedio de las asignaturas es: %.2f\n", sumaAsignatura/5.0);

    }

    return 0;
}
