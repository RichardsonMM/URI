#include<stdio.h>

using namespace std;

int josephus(int n, int k){
    if(n == 1) return 1;
    else return (josephus(n-1, k) + k-1) % n + 1;
}
int main(){
    int nc, n, k, res;
    scanf("%d", &nc);
    for(int i = 0; i < nc; i++){
        scanf("%d %d", &n, &k);
        res = josephus(n, k);
        printf("Case %d: %d\n", i + 1, res);
    }
    return 0;
}