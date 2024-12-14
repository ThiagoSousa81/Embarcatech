#include <stdio.h>
int main(){
    int idade, ano_nasc = 0;
    int ano_atual = 2024;
    
    printf("Em que ano vc nasceu?\n");
    scanf("%d", &ano_nasc);
    idade = ano_atual - ano_nasc;
    
    printf("Sua idade é %d", idade);
    
    return 0;
}