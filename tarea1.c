/*Nombre: Martin Espinosa
Fecha: 27-03-26
tarea: Desarrolle un programa en lenguaje C que solicite al usuario tres números enteros,
El programa debe mostrar en pantalla todos los números desde el número inicial hasta el número final,
aplicando el incremento indicado, utilizando exclusivamente la estructura for.*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, incremento;

    printf("ingresa un numero \n");
    scanf("%d", &num1);

    printf("ingresa un segundo numero \n");
    scanf("%d",&num2);

    printf("ingresa el incremento: \n");
    scanf("%d",&incremento);

    if (num1>num2)
    {
        printf("Error: La serie no se puede generar porque el numero inicial es mayor al numero final");
    }
    else
    {
        printf("generando serie: \n");
        for (int i= num1; i <= num2 ; i= i + incremento) {
        printf("%d\n", i);
    }
    }
    
    return 0;
}

