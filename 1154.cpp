#include<stdio.h>

using namespace std;

int main(){

    int n = 0, count = 0;
    double soma = 0.0;
    
    while(n >= 0){
        soma += n;
        scanf("%d", &n);
        count++;
    }
    
    printf("%.2lf\n", soma/(count - 1));

    return 0;
}