#include<stdio.h>

using namespace std;

int main(){

   char op[2];
   int n;
   double mat[12][12], soma = 0.0;
   scanf("%d", &n);
   scanf("%s", &op);

   for(int l = 0; l < 12; l++){
       for(int c = 0; c < 12; c++){
           scanf("%lf", &mat[l][c]);
       }
   }
   for(int i = 0; i < 12; i++){
       soma += mat[i][n];
   }
   if(op[0] == 'S') printf("%.1lf\n", soma);
   else if(op[0] == 'M') printf("%.1lf\n", soma/12.0);

    return 0;
}