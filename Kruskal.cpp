#include<vector>
#include<stdio.h>
using namespace std;

class UnionFind{
private:
    vector<int> parent, rank;
public:
    UnionFind(int N){
        parent.assign(N+1, 0);
        rank.assign(N+1, 0);
        for(int i = 0; i <= N; i++)
            parent[i] = i;
    }
    int findSet(int i){ 
        return (parent[i] == i) ? i : (parent[i] = findSet(parent[i]));
    }
    bool isSameSet(int i, int j){
        return findSet(i) == findSet(j);
    }
    void unionSet(int i, int j){
        if(!isSameSet(i, j)) return;
        int x = findSet(i), y = findSet(j);
        if(rank[x] > rank[y]) parent[y] = x;
        else{
            parent[x] = y;
            if(rank[x] == rank[y]) rank[y]++;
        }
    }
};

typedef pair<int, int> ii;
typedef long long ll;

int N, M;
vector < pair<ll, ii> > edgeList;

ll kruskal(){
    ll cost = 0;
    UnionFind UF(N);
    pair<int, ii> edge;
    sort(edgeList.begin(), edgeList.end());
    for (int i = 0; i < M; i++){
        edge = edgeList[i];
        if(!UF.isSameSet(edge.second.first, edge.second.second)){
            cost += edge.first;
            UF.unionSet(edge.second.first, edge.second.second);
        }
    }
    return cost;
}

