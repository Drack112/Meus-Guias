#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int ano;
    char nome[10];

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Informe a data de nascimento: ");
    scanf("%d", &ano);
    
    printf("Valor das vars: %d\nNome: %s\n", ano, nome);

    return 0;
}

/*
d,i => int
x,X => Hexadecimal
u   => int sem sinal
s   => string, char*
f   => double
p   => ponteiros
*/