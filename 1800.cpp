#include <cstdio>
#define MAX 10000

int main(){
    int N, R;
    while(scanf("%d%d", &N, &R) != EOF){
        int mark[MAX];
        for(int i = 0; i <= MAX; i++) mark[i] = 0;
        int v;
        for(int i = 0; i < R; i++){
            scanf("%d", &v);
            mark[v] = 1;
        }
        if(N-R <= 0) printf("*\n");
        else {
            for(int i = 1; i <= N; i++){
                if(mark[i] == 0){
                    printf("%d ", i);
                }
            }
            printf("\n");
        }

    }
    return 0;
}