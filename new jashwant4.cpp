#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf((a-b%2!=0)?"even":"odd");
	return 0;
}