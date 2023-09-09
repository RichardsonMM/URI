#include<stdio.h>

using namespace std;

int main (){

    int n, ratos = 0, coelhos = 0, sapos = 0, x = 0, total = 0; 
    double perc = 0, perr, pers;
    char y;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d %c", &x, &y);
        
        if(y == 'C'){ 
            coelhos += x;
        }
        else if(y == 'R'){
            ratos += x;
        }
        else if(y == 'S'){
            sapos += x;
        }
    
}   
    total = coelhos + ratos + sapos;
    printf("Total: %d cobaias\n", total );
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);

    perc = coelhos*100.0/total;
    perr = ratos*100.0/total;
    pers = sapos*100.0/total;

    printf("Percentual de coelhos: %.2lf %%\n", perc);
    printf("Percentual de ratos: %.2lf %%\n", perr);
    printf("Percentual de sapos: %.2lf %%\n", pers);


    return 0;
}