#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP((UINT)65001);

    int n1,n2,md;

    printf("Escreva um número: ");
    scanf("%d", &n1);

    printf("Escreva um número: ");
    scanf("%d", &n2);

    md=(n1+n2)/2;

    printf("\nA média dos 99999999999 números que você digitou é : %d\n",md);
    printf("\nParabéns você nâo digitou o número: %d\n",n1+1);
    return(0);
}