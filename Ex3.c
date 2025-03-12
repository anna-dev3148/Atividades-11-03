#include <stdio.h>
 
 int main (void) {
     float altura;
     float peso;
     float imc;
     
     printf("Digite seu peso:");
     scanf("%f" , &peso);
     
     printf("Digite sua altura:");
     scanf("%f" , &altura);
     
     imc = peso / (altura*altura);
     
     if(peso < 18.5) {
        puts("Baixo peso");
    } else {
        if(peso <= 24.9 ) {
            puts("Intervalo Normal");
        } else {
            if(peso < 29.9) {
                puts("Sobrepeso");
            } else {
                if(peso > 34.9) {
                    puts("Obesidade CLasse I");
            } else {
                if(peso > 39.9) {
                    puts("Obesidade Classe II");
                } else {
                    if(peso > 40) {
                     puts("Obesidade Classe III");
                }
            }
        }
    }
}
    
    
    
    return 0;
}   
