#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP((UINT)65001);

    int n1;

    printf("Escreva um número inteiro: ");
    scanf("%d", &n1);

    for(int n=0;n<n1+2;n++)
    {
    printf("\nParabéns você nâo digitou o número: %d\n",n1+1);
    }

    return(0);
}