#include<stdio.h>

using namespace std;

int main(){
    int n, x, cont = 0;
    scanf("%d", &n);
    for(int i = 0; i < 5; i++){
        scanf("%d", &x);
        if(x == n) cont++;
    }    
    printf("%d\n", cont);
    return 0;
}