#include<stdio.h>

using namespace std;


int main(){

    int n, t, soma = 0, c;

    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d", &n);
        c = n/2;
        soma = 0;
        for(int j = 1; j <= c; j++){
            if(n%j == 0){
                soma += j;
            }
        }
        if(soma == n){
            printf("%d eh perfeito\n", n);
        }
        else{
            printf("%d nao eh perfeito\n", n);
        }

}  

    





    return 0;
}