#include<stdio.h>

using namespace std;

int main (){

    int n, nt1 = 0, nt2 = 0, nt5 = 0, nt10 = 0, nt20 = 0, nt50 = 0, nt100 = 0;

    scanf("%d", &n);
    printf("%d\n", n);

    if(n >= 100){
        nt100 = (n/100);
        n -= nt100*100;
    }
    if(n >= 50){
        nt50 = (n/50);
        n -= nt50*50;
    }
    if(n >= 20){
        nt20 = (n/20);
        n -= nt20*20;
    }
    if(n >= 10){
        nt10 = (n/10);
        n -= nt10*10;
    }
    if(n >= 5){
        nt5 = (n/5);
        n -= nt5*5;
    }
    if(n >= 2){
        nt2 = (n/2);
        n -= nt2*2;
    }
    if(n >= 1){
        nt1 = (n/1);
        n -= nt1*1;
    }

    printf("%d nota(s) de R$ 100,00\n", nt100);
    printf("%d nota(s) de R$ 50,00\n", nt50);
    printf("%d nota(s) de R$ 20,00\n", nt20);
    printf("%d nota(s) de R$ 10,00\n", nt10);
    printf("%d nota(s) de R$ 5,00\n", nt5);
    printf("%d nota(s) de R$ 2,00\n", nt2);
    printf("%d nota(s) de R$ 1,00\n", nt1);
    




    return 0;
}