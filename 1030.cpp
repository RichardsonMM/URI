#include<stdio.h>
#include<list>

using namespace std;

int main(){

    int n, k, nc, cnt = 0;
    list<int> circulo;
    scanf("%d", &nc);
    for(int i = 1; i <= nc; i++){
        scanf("%d %d", &n, &k);
        for(int j = 1; j <= n; j++){
            circulo.push_back(j);
        }
        int tam = circulo.size();
        printf("tam = %d\n", tam);
        for(int i = k; tam > 1; i++){
            if(i == k) circulo.remove(i);
            cnt++;
            if(cnt == 2){
                circulo.remove(i);
                cnt = 0;
            }
            tam--;
            if(i > circulo.back()){
                 i = 1;
                printf("passou aqui\n");
            }
        }
        printf("tam : %d\n", tam);
        printf("Case %d: %d\n", i, circulo.front());
        circulo.clear();
    }


    return 0;
}