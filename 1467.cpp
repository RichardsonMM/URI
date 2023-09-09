#include<stdio.h>

using namespace std;

int main(){

    int a, b, c;

    while(scanf("%d %d %d", &a, &b, &c) != EOF){
        if(a == b && c != a) printf("C\n");
        else if(c == b && a != c) printf("A\n");
        else if(a == c && b != a) printf("B\n");
        else if(a == b && a == c) printf("*\n"); 
    }



    return 0;
}