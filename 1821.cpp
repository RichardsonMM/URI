#include<stdio.h>

using namespace std;

int main(){
    
    long long calc, n;

    scanf("%lld", &n);
    
    calc = (n*(n-3))/2;
    
    printf("%lld\n", calc);



    return 0;
}