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
    int y = 0;
   for(int l = 1; l <= 10; l++){
       if(l <= 4 && l > 1) y++;
       else if(l == 5) y++;
       else if(l >= 7) y--;  
       for(int c = 0; c <= y; c++){
           soma += mat[l][c];
           cnt++;
       }
   } 

   if(op[0] == 'S') printf("%.1lf\n", soma);
   else if(op[0] == 'M') printf("%.1lf\n", soma/cnt);

    return 0;
}