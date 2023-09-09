#include<stdio.h>

using namespace std;

int main(){

    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a > b+c || a > c+d || b > a+c || b > c+d || c > a+b || c > b+d || c > a+d || d > a+b || d > b+c || d > a+c ){
        printf("N\n");
    }
    else
        printf("S\n");


    return 0;
}