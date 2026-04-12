#include<stdio.h>

int main(int argc, char const *argv[])
{
    int r[3];

    printf("Ingrese un numero");
    scanf("%d",&r[0]);
    printf("Ingrese un numero");
    scanf("%d",&r[1]);
    printf("Ingrese un numero");
    scanf("%d",&r[2]);
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",r[i]);
    }
    
    return 0;
}
