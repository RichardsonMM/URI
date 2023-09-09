#include<stdio.h>

using namespace std;

int main(){

    int m, n, soma, i;

    while(true){

        scanf("%d %d", &m, &n);

        if(m<=0 || n<=0) break;

        if(m<n){
            i = 0;
            soma  = 0;

            for(i = m; i<=n; i++){
                printf("%d ", i);
                soma += i;     
            }
            printf("Sum=%d\n", soma);
        }
        if(m>n){
            i = 0;
            soma = 0;
            for(i=n; i<=m; i++){
                printf("%d ", i);
                soma += i;
            }
            printf("Sum=%d\n", soma);
        }       
    }
        
    return 0;
}