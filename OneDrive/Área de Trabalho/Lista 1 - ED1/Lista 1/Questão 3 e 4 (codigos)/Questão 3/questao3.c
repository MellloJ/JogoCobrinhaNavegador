#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    int varInt = 5;
    char varChar = 'J';
    double varDouble = 50000.0;
    int * pontInt;
    char * pontChar;
    double * pontDouble;

    pontInt = &varInt;
    pontChar = &varChar;
    pontDouble = &varDouble;

    printf("O endereço da variável char varChar é 0x%X\n", pontChar);
    printf("O endereço da variável int varInt é 0x%X\n", pontInt);
    printf("O endereço da variável double varDouble é 0x%X\n", pontDouble);
    printf("O endereço da variável char* pontChar é 0x%X\n", &pontChar);
    printf("O endereço da variável int* pontInt é 0x%X\n", &pontInt);
    printf("O endereço da variável double* pontDouble é 0x%X\n", &pontDouble);

    printf("\nO valor da variável char varChar é %c\n", *pontChar);
    printf("O valor da variável int varInt é %d\n", *pontInt);
    printf("O valor da variável double varDouble é %.1f\n", *pontDouble);
    printf("O valor da variável char* pontChar é 0x%X\n", pontChar);
    printf("O valor da variável int* pontInt é 0x%X\n", pontInt);
    printf("O valor da variável double* pontDouble é 0x%X\n", pontDouble);

    printf("\no tamanho do tipo char é %d bytes\n", sizeof(char));
    printf("o tamanho do tipo int é %d bytes\n", sizeof(int));
    printf("o tamanho do tipo double é %d bytes\n", sizeof(double));
    printf("o tamanho do tipo char* é %d bytes\n", sizeof(char*));
    printf("o tamanho do tipo int* é %d bytes\n", sizeof(int*));
    printf("o tamanho do tipo double* é %d bytes\n", sizeof(double*));

    return 0;
}
