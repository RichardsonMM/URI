#include<stdio.h>

using namespace std;


int fatorial(int v){

    if(v == 0 || v == 1)
        return 1;
    else
        return v*fatorial(v-1);
}

int main(){
    int n, fat;
    
    scanf("%d", &n);
    fat = fatorial(n);
    printf("%d\n", fat);

    return 0;
}