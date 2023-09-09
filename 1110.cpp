#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int> fila;
    queue<int> aux;
    int n;
    while(cin >> n && n != 0){
        for(int i = 0; i < n; i++)
            fila.push(i+1);
        }
        int i = fila.size();
        cout << "Discarded cards: ";
        while(i != 1){
            int prim = fila.front();
            cout << prim;
            if(i > 2) cout << ", ";
            fila.pop();
            i--;

            int inicio = fila.front();
            fila.push(inicio);
            fila.pop();
        }

        cout << "Remaining card: " << fila.front() << endl;
        fila = queue<int>();
    
    return 0;
}