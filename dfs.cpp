#include<vector>
#define VISITED 1
#define UNVISITED -1

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

vi dfs_num;

void dfs(int u){ //
    dfs_num[u] = VISITED;
    for(int i = 0; i < (int)AdjList[u].size(); i++){
        ii v = AdjList[u][i];
        if(dfs_num[v.first] == UNVISITED)
            dfs(v.first);
    }
}