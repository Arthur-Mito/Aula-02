#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP((UINT)65001);

    char sn;

    printf("\nSEU COMPUTADOR ESTÁ BUGADO, REINICIAR AGORA(s/n)?\n");
    scanf("%s",&sn);

    printf("\n... REINICIANDO ...\n");
 
 

    return(0);
}