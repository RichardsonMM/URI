#include<stdio.h>

using namespace std;

int main(){

    int n;

    scanf("%d", &n);
    int count = 1;
    int vet[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &vet[i]);
    for(int i = 1; i < n; i++)
        if(vet[i] > vet[i-1]) 
            count++;
    printf("%d\n", count);

    return 0;
}