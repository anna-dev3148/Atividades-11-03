#include <stdio.h>
int main () {
    float imc;
    
    printf("Digite o IMC:");
    scanf("%f" , &imc);
    
    if(imc >= 18.5) {
        if(imc <= 24.9) {
            puts("Intervalo Normal");
           } else {
                puts("Fora do intervalo normal");
            }
            
        
    } else {
        puts("Fora do intervalo normal");
    }
    
 
    return 0;
}