#include<stdio.h>


using namespace std;

int main(){

    int a, b, c, d;

    scanf("%d", &a);

    for(b = 1; b <= a; b++){

        c = b*b;
        d = b*b*b;
        printf("%d %d %d\n", b,c,d);
    }
    return 0;
}