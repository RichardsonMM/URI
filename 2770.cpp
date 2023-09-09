#include<iostream>

using namespace std;

int main(){

    int x, y, m, a, b;

    while(cin >> x >> y >> m){

        for(int i = 0; i < m; i++){
            cin >> a >> b;
            if(a >= x && b <= y || b >= x && a <= y)
                printf("Sim\n");
            else if(a == 0 || b == 0)
                printf("Nao\n");
            
            else if(a > x || a > y)
                printf("Nao\n");
            else if(b > x || b > y)
                printf("Nao\n");
            
            else printf("Sim\n");
            
        }

    }
    return 0;
}