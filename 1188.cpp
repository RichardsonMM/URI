#include<stdio.h>

using namespace std;

int main(){

   char op[2];
   int n;
   double mat[12][12], soma = 0.0, cnt = 0.0;
   scanf("%d", &n);
   scanf("%s", op);

   for(int l = 0; l < 12; l++){
       for(int c = 0; c < 12; c++){
           scanf("%lf", &mat[l][c]);
       }
   }
    int x = 0;
    int y = 11;
   for(int l = 11; l >= 7; l--){
       x++;
       y--;
       for(int c = x; c <= y; c++){
           soma += mat[l][c];
           cnt++;
       }
   } 

   if(op[0] == 'S') printf("%.1lf\n", soma);
   else if(op[0] == 'M') printf("%.1lf\n", soma/cnt);

    return 0;
}