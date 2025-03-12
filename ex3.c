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
     
     if(imc < 18.5) {
        puts("Baixo peso");
    } else {
        if(imc <= 24.9 ) {
            puts("Intervalo Normal");
        } else {
            if(imc < 29.9) {
                puts("Sobrepeso");
            } else {
                if(imc < 34.9) {
                    puts("Obesidade CLasse I");
            } else {
                if(imc < 39.9) {
                    puts("Obesidade Classe II");
                } else {
                    if(imc > 40) {
                     puts("Obesidade Classe III");
                }
            }
        }
    }
}
}


    
    return 0;
 }
