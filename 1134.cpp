#include<stdio.h>

using namespace std;

int main(){
    int alcool = 0;
    int gasolina = 0;
    int diesel = 0;
    int x;

    while(1){
        scanf("%d", &x);

        if(x == 1)
            alcool++;
        else if(x==2)
            gasolina++;
        else(x == 3)
            diesel++;
        if(x > 4 || x < 1)
            continue;
        else if(x == 4)
            break;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool:\n", alcool);
    printf("Gasolina:\n", gasolina);
    printf("Diesel:\n", diesel);


    return 0;
}