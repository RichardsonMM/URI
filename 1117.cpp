#include<stdio.h>

using namespace std;

int main(){
    
    double n,media,soma = 0,cont = 0;
    while(true){
        if (cont == 2) 
            break;
        scanf("%lf", &n);
        if(n >= 0.0 && n <= 10.0){
            cont ++;
            soma += n;
        }else{
            printf("nota invalida\n");
        }
     }    
        media = soma/2.00;
        printf("media = %.2lf\n", media);    
    
    return 0;
}