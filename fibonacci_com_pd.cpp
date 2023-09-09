#include<stdio.h>
#include<string.h>
#define MAX 1000000

using namespace std;

int fib(int n){
    long long int memo[MAX];
    memset(memo, -1, sizeof memo);
    memo[0] = 0;
    memo[1] = 1;
    if(memo[n] == -1)
        memo[n] = fib(n-1) + fib(n-2);
    else
        return memo[n];
}

int main(){
    
    int n;
    long long int f;
    scanf("%d", &n);
    f = fib(n);
    printf("%lld\n", f);


    return 0;
}