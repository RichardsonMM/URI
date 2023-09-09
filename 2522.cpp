#include<stdio.h>
#include<vector>
#include<algorithm>

class UnionFind{
private:
    vector<int> p, rank;
public:
    UnionFind(int N){
        p.assign(N, 0);
        rank.assign(N, 0);
        for(int i = 0; i < N; i++)
            p[i] = i;
    }
    int findSet(int i){
        return (p[i] == i) ? i : (p[i] = findSet(p[i]));
    }
    bool isSameSet(int i, int j){
        return findSet(i) == findSet(j);
    }
    void unionSet(int i, int j){
        if(isSameSet(i, j)) return;
        int x = findSet(i), y = findSet(j);
        if(rank[x] > rank[y]) p[y] = x;
        else{
            p[x] = y;
            if(rank[x] == rank[y]) rank[y]++;
        }
    }
};

typedef pair<int , int> ii;
typedef long long ll;

int N, M;
vector< pair<ll , ii> > edgeList;

ll kruskal(){
    ll custo = 0;
    UnionFind UF(N);
    pair<int, ii> edge;
    sort(edgeList.begin(), edgeList.end());
    for(int i = 0; i < M; i++){
        edge = edge.List[i];
        if(!UF.isSameSet(edge.second.first , edge.second.second)){
            cost += edge.first;
            UF.unionSet(edge.second.first , edge.second.second);
        }   
     }
     return custo;
}

int main(){

    int n, x, y;
    double com;

    while(scanf("%d", &n)!= EOF){

        for(int i = 0; i < n; i++){
            scanf("%d %d", &x, &y);
       
        }
    }


    return 0;
}