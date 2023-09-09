#include<iostream>
#include<queue>
#define INF ((int) 1e9)
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

vector<vii> adj;
vi dist;
int C, A, B, M, L, K;


void Dijkstra(int s){
    dist.assign(N, INF);
    dist[s] = 0;
    priority_queue<ii, vector<ii>, greater<ii> > q;
    q.push(ii(0, s));
    while(!q.empty()){
        int u = q.top().second; q.pop();
        for(auto e : adj[u]){
            int v = e.first, w = e.second;
            if(dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
                q.push(ii(dist[v], v));
            }
        }
    }    
}

int main(){
    int C, A, B, M, L, K;
    cin >> C;
    while(C--){
        cin >> A >> B >> M >> L >> K;
        adj.assign(N, vii());
        while(M--){
            int u, v, w;
            cin >> u >> v >> w;
            u--, v--;
            adj[u].push_back(ii(v, w));
            adj[v].push_back(ii(u, w));
        }
        


    }


}


