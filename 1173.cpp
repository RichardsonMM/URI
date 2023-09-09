#include<stdio.h>

using namespace std;

int main(){

	int v;
	int N[10];


	scanf("%d", &v);
	printf("N[0] = %d\n", v);

	for(int i = 1; i < 10; i++, v*=2){
		printf("N[%d] = %d\n", i, v*2);
	
	}

	return 0;
}