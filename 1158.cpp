#include<stdio.h>

using namespace std;


int main(){

    int x, y, t;
    
    scanf("%d", &t);

    for(int i = 0; i < t; i++){

        int cont = 0, soma = 0;
        scanf("%d %d", &x, &y);

        for(int i = x;; i++){
            if(i%2 != 0){
                soma += i;
                cont++;   
            }
        if(cont == y)
            break;
            
            

        }
        printf("%d\n", soma);

    }

    return 0;
}