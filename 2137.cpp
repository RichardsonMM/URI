#include<stdio.h>
#include<algorithm>
#define MAX ((int) 1e6)

using namespace std;

int main(){

    int n;
    int vet[MAX];


    while(scanf("%d", &n)!= EOF){
        
        for(int i = 0; i < n; i++){
            scanf("%d", &vet[i]);
        }
        sort(vet, vet+n);
        
        for(int i = 0; i < n; i++){
            if(vet[i] < 100 && vet[i] >= 10) printf("00");
            else if(vet[i] < 1000 && vet[i] >= 100) printf("0");
            else if(vet[i] < 10) printf("000");
            //else if(vet[i] == 0) printf("0000");
            printf("%d\n", vet[i]);
        }
    }


    return 0;
}