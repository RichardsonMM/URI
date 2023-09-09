#include<stdio.h>

using namespace std;

int main(){ 
    double salario, resto, resultado;

    scanf("%lf", &salario);
    
    if(salario > 0 && salario <= 2000)
        printf("Isento\n");
    else if(salario > 2000 && salario <= 3000){
        resto = salario - 2000;
        resultado = resto * 0.08;
        printf("R$ %.2lf\n", resultado);
    }
    else if(salario > 3000 && salario < 4500){
        resto = salario - 3000;
        resultado = (resto * 0.18) + (1000 * 0.08);  
        printf("R$ %.2lf\n", resultado);   
     }
    else{
        resto = salario - 4500;
        resultado = (resto * 0.28) + (1500 * 0.18) + (1000 * 0.08);
        printf("R$ %.2lf\n", resultado);
    }

    return 0;
}