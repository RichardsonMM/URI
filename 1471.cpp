#include <iostream>
using namespace std;

int main(){

    int n,r,pessoa, tag;
    while(cin>>n>>r){
        tag = 0;

        int v[n+1];
        
        for(int i = 1; i < n+1; i++){
            v[i] = 0;
        }
        for(int i = 0; i<r; i++){
            cin >> pessoa;
            v[pessoa] = 1;
        }

        for(int i = 1; i<n+1; i++){
            if(v[i]==0){
                cout << i << " ";
                tag = 1;
            }
        }
        if(tag==0)
            cout << '*';
        cout << endl;
    }

    return 0;
}