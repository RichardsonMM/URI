#include <stdio.h>
int main()
{
    int n, menor, j=0, sla=1;
    scanf("%d", &n);
    int vet[n];
    
    for(int i = 0; i < n; i++)
        scanf("%d", &vet[i]);
    menor = vet[j];
    
    for(j = 0; j < n; j++){
        if(vet[j] < menor){
            menor = vet[j];
            sla = j+1;
        }
    }
    printf("%d\n", sla);
    
    return 0;
}