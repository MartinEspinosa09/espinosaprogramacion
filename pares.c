#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, i, limite;
    
    printf("ingresa un numero par: \n");
    scanf("%d",&num1);

    printf("ingrese el limite de la secuencia: \n");
    scanf("%d",&limite);

    if (num1%2==0)
    {
        printf("el numero es par");
        //verifica si el numero es par y le va sumando de 2 en 2 hasta el limite que le pongamos

        for (i=num1; i<=limite ; i=i+2) {
            
            printf("%d\n",i);
        }

    }
    else
    {
        printf("el numero es impar y no se puede hacer la secuencia");
    }
    
    return 0;
}
