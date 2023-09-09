#include<stdio.h>

using namespace std;

int main(){

    int x, y, i, j, soma = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x>y){
        for(i = y; i<=x; i++){
            if(i%13!=0){
                soma += i;
            }
        }
        printf("%d\n", soma);
    }
    if(x<y){
        for(j = x; j<=y; j++){
            if(j%13!=0){
                soma += j;
            }
        }
        printf("%d\n", soma);
    }
    
    return 0;
}