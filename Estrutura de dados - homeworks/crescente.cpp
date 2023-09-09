#include<stdio.h>

using namespace std;

void crescente(int n, int count){
    count++;
    if(count <= n){
        printf("%d\n", count);
        return crescente(n, count);
    }
}
int main(){
    int n, imp, count = 0;
    scanf("%d", &n);
    crescente(n, count);


    return 0;
}