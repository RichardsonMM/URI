#include<stdio.h>

using namespace std;

int main(){

    int n;
    int fib[65];
    int trib[65];
    fib[1] = 1;
    trib[1] = 3;
    int soma = 0;

    while(scanf("%d", &n) != EOF){
        /*while(n > 0){
            soma += n%10;
            n/=10;
        }*/
        for(int i = 2; i <= 60; i++){
            fib[i] = fib[i-1]+fib[i-2];
            }
        for(int j = 2; j <= 60; j++){
            soma = 0;
            soma += fib[j]%10;
            fib[j]/=10;
            if(soma%3 == 0 and soma)
                trib[j] = fib[j];
            
        }

        printf("%d\n", trib[n]);
        
        
        }




    return 0;
}