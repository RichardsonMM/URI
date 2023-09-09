#include<stdio.h>
#include<queue>
#define INF ((int) 1e9)
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

vector<ii> LG;
vi dist;

void dijkstra(int s, int N){
    dist.assign(N, INF);
    dist[s] = 0;
    priority_queue<ii, vector<ii>, greater<ii> > Q;
    Q.push(ii(0, s));
    while(!Q.empty()){
        int u = Q.top().second; Q.pop();
        for(auto e : LG[u]){
            int v = e.first , w = e.second;
            if(dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
                Q.push(ii(0, s));
            }
        }
    }
}

int main(){

    int N, E;

    while(scanf("%d %d", &N, &E)){
        if(N == 0 && E == 0) break;
        
        LG.assign(N, vii());
        int X, Y, H;
        for(int i = 0; i < E; i++){
            scanf("%d %d %d", &X, &Y, &H);

            

        }

    }


    return 0;
}
