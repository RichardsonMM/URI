#include <stdio.h>
#include <vector>
using namespace std;

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
        if(isSameSet(i, j))
            return;
        int x = findSet(i), y = findSet(j);
        if(rank[x] > rank[y])
            p[y] = x;
        else{
            p[x] = y;
            if(rank[x] == rank[y])
                rank[y]++;
        }
    }
};

int main(){
    int nb, no;
    scanf("%d %d", &nb, &no);
    UnionFind uf(nb);
    while(no--){
        char op;
        int a, b;
        scanf(" %c %d %d", &op, &a, &b);
        a--;
        b--;
        if(op == 'F') uf.unionSet(a, b);
        else if(op == 'C'){
            if(uf.isSameSet(a, b)){
                printf("S\n");
            }else{
                printf("N\n");
            }
        }
    }

    return 0;
}