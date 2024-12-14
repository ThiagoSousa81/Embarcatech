#include <stdio.h>

int main() 
{
    float nota1, nota2, nota3, nota4, media = 0;
    printf("1ª nota: ");
    scanf("%f", &nota1);
    printf("2ª nota: ");
    scanf("%f", &nota2);
    printf("3ª nota: ");
    scanf("%f", &nota3);
    printf("4ª nota: ");
    scanf("%f", &nota4);
    
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    
    printf("Sua média é %.1f", media);
    return 0;
}