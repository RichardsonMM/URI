#include<stdio.h>
int main()
{
    int i,j,n,m,k,l;
    for(;;){
        scanf("%d",&n);
        if(n==0)break;
        int arr[n][n];
        m=1;
        for(i = 0;i < n;i++){
            m=i+1;
            k=2;
            for(j = 0;j <= i;j++,m--){
                arr[i][j]=m;
            }
            for(j=i+1;j<n;j++,k++){
                arr[i][j]=k;
            }
            m++;
        }
        for(i = 0;i < n;i++){
            for(j = 0;j < n;j++){
                if(j==0)printf("%3d",arr[i][j]);
                else printf(" %3d",arr[i][j]);
            }printf("\n");
        }printf("\n");
    }
    return 0;
}