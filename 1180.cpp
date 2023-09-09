#include<stdio.h>
#include<algorithm>
#define MAX ((int) 1e5)
#define INF ((int) 1e9)


using namespace std;

int main(){

    long long int x[MAX];
    long long int n, min = INF;
    int pos = 0;

    scanf("%lld", &n);
    for(int i = 0; i < n; i++){
        scanf("%lld", &x[i]);
        if(x[i] < min){
            min = x[i];
            pos = i;
        }
    }

    printf("Menor valor: %lld\n", min);
    printf("Posicao: %d\n", pos);

    return 0;
}