#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP((UINT)65001);

    int n;

    printf("Escreva um número: ");
    scanf("%d", &n);

    for (int i = 0; i < 1000000; i++)
    {
    printf("\nERRO VOCÊ DIGITOU O NÚMERO PROIBIDO\n");
    }
    
    
    return(0);
}