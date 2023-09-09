#include<stdio.h>
#include<queue>
#include<vector>
#include<cmath>
#define INF ((int) 1e9)
using namespace std;
typedef pair<int, int> ii;
typedef vector<ii> vii;

vector<vii>LG;
vector<int> dist;

void Dijkstra(int s, int N){
    dist.assign(N, INF);
    dist[s] = 0;
    priority_queue<ii, vector<ii>, greater<ii>> Q;
    Q.push(ii(0, s));
    while(!Q.empty()){
        int u = Q.top().second;
        Q.pop();
        for(auto e : LG[u]){
            int v = e.first;
            int w = e.second;
            if(dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
                Q.push(ii(dist[v], v));
            }
        }
    }
}

int main(){
    int N, M, C, K;

    while(scanf("%d %d %d %d", &N, &M, &C, &K)){
        if(N == 0 && M==0 && C==0 && K==0) break;

        LG.assign(N, vii());
        int u, v, w;
        for(int i = 0; i < M; i++){
            scanf("%d %d %d", &u, &v, &w);

            if((u >= C && v >= C) || (u < C && v < C && abs(u - v) == 1)){
                LG[u].push_back(ii(v, w));
                LG[v].push_back(ii(u, w));
            }
            if(u >= C && v < C){
                LG[u].push_back(ii(v, w));
            }
            if(v >= C && u < C){
                LG[v].push_back(ii(u, w));
            }
        }
        Dijkstra(K, N);
        printf("%d\n", dist[C-1]);


    }

    return 0;
}