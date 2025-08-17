#include <stdio.h>


int main()

{

    char C; // declarando variável, armazenará apenas 1 caracter

    char Language[20]; // declarando variável, armazenará até 20 caracteres

    char Message[100]; // declarando variável, armazenará até 100 caracteres

  

    scanf(" %c", &C);  // %c usado quando recebe apenas 1 byte, &C dizendo a posição que c está na memória para scanf poder armazenar o valor

    scanf(" %s", Language); // %s para strings

    scanf(" %[^\n]", Message); //%[^\n] quer dizer leia tudo até encontrar uma nova linha, "leia e armazene tudo que o usuário digitar até ele apertar Enter, incluindo espaços, e ignore o Enter."

    printf("%c\n", C);  // vai printar a unica string em C

    printf("%s\n", Language);  // vai printar Language

    printf("%s\n", Message);  // vai printar Message

  

    return 0;  // sucesso
