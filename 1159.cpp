#include<stdio.h>

using namespace std;


int main(){

    int n;

    while(1){
        scanf("%d", &n);
        int soma = 0, cont = 0;
        if(n == 0) break;
        else{
            for(int i = n;; i++){
                if(i%2 == 0){
                    cont++;
                    soma += i;
                }
                if(cont == 5){
                    break;
                }
                
            }
            printf("%d\n", soma);
            
        }
        

    }


    return 0;
}