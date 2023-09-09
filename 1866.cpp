#include<stdio.h>

using namespace std;

int main(){

    int s = 0, s2 = 0, n;
    int t = 0, x;

    scanf("%d", &x);

    for(int i = 0; i < x; i++){
        scanf("%d", &n);
        
        if(n%2 == 0) printf("0\n");
        else printf("1\n");
    }

    


    return 0;
}