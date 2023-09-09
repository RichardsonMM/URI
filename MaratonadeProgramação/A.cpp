#include<cstdio>

using namespace std;

int main(){
    int a, b;
    scanf("%d.%d", &a, &b);
    int x = a*100+b;    
    int cnt = 0, ang = 0;
    while(true){
        cnt++;
        ang+=x;
        if(ang >= 36000){
            ang-=36000;
        }
        if(ang == 0) break;
    }
    printf("%d\n", cnt);
    return 0;
}