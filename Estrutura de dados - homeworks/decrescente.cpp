#include<stdio.h>

using namespace std;

void decrescente(int n){
    if(n >= 1){
        printf("%d\n", n);
        n--;
        decrescente(n);
    }

}

int main(){

    int n;

    scanf("%d", &n);

    decrescente(n);


    return 0;
}