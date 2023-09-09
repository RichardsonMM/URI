#include<stdio.h>

using namespace std;

int main(){

    int x1;

    double n,media,soma = 0,cont = 0;
    
    while(true){
        
        if (cont == 2){
            
            
            printf("media = %.2lf\n", media = soma/2.00);
            
            printf("novo calculo (1-sim 2-nao)\n");
            
            scanf("%d", &x1);
            
            if(x1==1){
                cont = 0;
                soma = 0;
                continue;
        }
            if(x1==2){
                break;
            }
            else if(x1 > 2 || x1 < 1){
                scanf("%d", &x1);
                cont = 0;
                soma = 0;
            }
        }
        scanf("%lf", &n);
        
        if(n >= 0.0 && n <= 10.0){
            
            cont ++;
            
            soma += n;
        
        }else{
           
            printf("nota invalida\n");
        }
     }    

    return 0;
}