#include<stdio.h>
int main(){
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	//cheak last bit using bitwies and
	if (num & 1)
	printf("%d is old\n",num);
	else
	printf("%d is even\n", num);
	return 0;
}