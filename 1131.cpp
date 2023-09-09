#include<stdio.h>
#include<string.h>

using namespace std;

int main(){

    int grenais = 0, gremio = 0,inter = 0;
    int i, g, empates = 0, novo;

    while(1){
        grenais++;
        scanf("%d %d", &i, &g);
        if(i>g)
            inter++;
        if(i == g)
            empates++;
        if(i<g)
            gremio++;
        
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &novo);
        if (novo == 2)
            break;
        else
            continue;
    }
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empates);

    if(inter > gremio){
        printf("Inter venceu mais\n");
    }
    else if(inter == gremio){
        printf("Nao houve vencedor\n");
    }
    else {
        printf("Gremio venceu mais\n");
    }

}