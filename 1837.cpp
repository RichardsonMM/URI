#include<stdio.h>
#include<algorithm>

using namespace std;

int main(){

    int a, b;
    int q, r;

    scanf("%d %d", &a, &b);

    q = (a/b);
    r = (a%b);
    
    if(a%b != 0){
        a = b*q +r;
    }

    printf("%d %d\n", q, r);




    return 0;
}