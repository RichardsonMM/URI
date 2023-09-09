#include<stdio.h>
#include<string.h>

using namespace std;

int main(){

    int t, n;
    int v[n];
    
    while(scanf("%d", &t)== 1){
        memset(v, 0, sizeof v);
        for(int i = 1; i <= t; i++){
            scanf("%d", &n);
            v[n]++;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < v[i]; j++){
                if(v[i] > 0)
                    printf("%d aparece %d vez(es)\n", i, v[i]);
            }
        }
    }




    return 0;
}