#include<stdio.h>

using namespace std;

int main(){

    int matricula = 0, maior = 0, nota, num, i;
    int n;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d %d", &num, &nota);
        if(nota > maior){
            maior = nota;
            matricula = num;
        }
    }
    if(maior < 8.0)
        printf("Minimum note not reached\n");
    else
        printf("%d\n", matricula);
    



    return 0;
}