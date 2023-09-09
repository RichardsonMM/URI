#include<stdio.h>
#include<algorithm>

using namespace std;

int main(){
    int x,y, menor, maior, soma = 0 ;

    scanf("%d", &x);
    scanf("%d", &y);

    menor = min(x, y);
    maior = max(x, y);

    for(int i = menor+1; i < maior; i++){
        if(i%2 != 0)
            soma += i;
    }
    printf("%d\n", soma);

    return 0;

}