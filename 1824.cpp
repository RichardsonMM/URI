#include<stdio.h>
#include<string>
#define MAX 12345634567

using namespace std;

int main(){

    int n, i;
    char curso[MAX];

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%s", curso);
    }
    printf("Ciencia da Computacao\n");

    return 0;
}