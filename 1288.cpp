#include<iostream>
#define MAXN 60
#define MAXW 110
using namespace std;

int pd[MAXN][MAXW];
int valores[MAXN], pesos[MAXN], N;

int mochila(int n, int W){
    if(n == N || W == 0) return 0;
    if(pd[n][W] != -1)
        return pd[n][W];
    int res = 0;
    if(pesos[n] > W) res = mochila(n+1, W);
    else{ res = max(mochila(n+1, W), valores[n] + mochila(n+1, W-pesos[n]));
    }
    return pd[n][W] = res;
}


int main(){
    int ct;
    cin >> ct;
    while(ct--){
        cin >> N;
        for(int i = 0; i < N; i++){
            cin >> valores[i] >> pesos[i];
        }
        for(int i = 0; i < MAXN; i++){
            for(int j = 0; j < MAXW; j++){
                pd[i][j] = -1;
            }
        }
        int k, r;
        cin >> k >> r;

        int resp = mochila(0, k);
        if(resp >= r) cout << "Missao completada com sucesso\n";
        else cout << "Falha na missao\n";
    }
    return 0;
}

