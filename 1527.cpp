#include<stdio.h>
#include<vector>

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
    int find(int i){
        while(i != parent[i]) i = parent[i];
            return i;
    }
    bool isSameSet(int i, int j){
        return find(i) == find(j);
    }
    void unionSet(int i, int j){
        if(isSameSet(i, j)) return;
        int x = find(i), y = find(j);
        if(rank[x] > rank[y]) parent[y] = x;
        else{
            parent[x] = y;
            if(rank[x] == rank[y]) rank[y]++;
        }
    }
};

int main(){

    int x ,N, M, P, Q, A, B;

    while(scanf("%d", &x) != EOF){
        scanf()
    }




    return 0;
}