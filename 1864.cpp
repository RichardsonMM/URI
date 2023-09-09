// LIFE IS NOT A PROBLEM TO BE SOLVED
#include<stdio.h>
#include<string>
#define MAX 123456789

using namespace std;

int main(){

    char frase[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){6

        printf("%c", frase[i]);
    }
    printf("\n");




    return 0;
}