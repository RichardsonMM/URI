#include<bits/stdc++.h>
#define MAX ((int) 1e6)

using namespace std;

int main(){

    int v[MAX];
    int inv[MAX];
    int n, cont;

    while(cin >> n){
        if(n == 0) break;

        cont = 0;

        for(int i = 1; i <= n; i++){
            cin >> v[i];
            inv[v[i]] = i;
        }

        for(int i = 1; i <= n; i++)
            if(v[i] == inv[i]) cont++;

        if(cont == n) cout << "ambiguous\n";
        else cout << "not ambiguous\n";

    }
    
    return 0;

}