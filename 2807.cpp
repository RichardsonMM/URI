#include<stdio.h>
#define MAX 65

using namespace std;

int main(){
	int  t, n, i;
    long long int fibs[MAX];
    fibs[0] = 0;
    fibs[1] = 1;
    for(int i = 2; i <= 60; i++)
        fibs[i] = fibs[i-1]+fibs[i-2];
	scanf("%d", &n);
	for(int i = n; i > 1; i--){
		printf("%lld ", fibs[i]);
		
	}
	printf("1");
	printf("\n");
    

	return 0;
}
