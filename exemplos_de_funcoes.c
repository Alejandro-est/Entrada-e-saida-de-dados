#include <stdio.h>
int main (void) {

    int intVar = 9999999;                  //Variavel de tipo inteiro de base 10//
    int intVar2 = 10;                     //Variavel de tipo inteiro de base 10//
    double doubleVar = 100.123456789;     //Variavel de tipo double//

    // Formatacao variaveis inteiras // 
    printf("Variavel inteira (%%d) = %d\n", intVar);    //Variavel de tipo digitos (posso colocar um numero de quantos digitos eu quero alinhar para direita. ex: %5d\n )//
    printf("Variavel inteira (%%i) = %i\n", intVar);   //Variavel de tipo inteiro//
    printf("Variavel inteira (%%x) = %x\n", intVar);   //Variavel do tipo hexadecimal (vai converter decimal em hexadecimal)//
    printf("Variavel inteira (%%o) = %o\n", intVar);   //Variavel de tipo octal (vai converter decimal em octal)//
    printf("\n");

    // Formatacao variaveis float e double //
    printf("Variavel double (%%f) = %f\n", doubleVar); //Vai mostrar até 6 casas depois da virgola e vai arredondar o último valor. Tambem posso escrever %.2f\n e só vai mostrar duas casas decimais e arredondar ex:dinheiro//
    printf("Variavel double (%%e) = %e\n", doubleVar); //Numero em notaçao cientifica//
    printf("Variavel double (%%g) = %g\n", doubleVar); //Vai mostrar até 3 casas depois da virgola só que nao vai arredondar //
    printf("Variavel double (%%a) = %a\n", doubleVar); //Numero em notaçao cientifica com casas decimais//
    printf("\n");

    system("pause");
    return 0;


}
       