#include<stdio.h>
#include<cstring>

using namespace std;

int main(){

    char galopeira[10100];
    int n, tam;
    scanf("%d", &n);
    while(n--){
        scanf("%s", galopeira);
        tam = strlen(galopeira);
        printf("%.2lf\n", tam*.01);
    }

    return 0;
}