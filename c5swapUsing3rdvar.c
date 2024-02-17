#include<stdio.h>

int main(){
	int a,b,temp;
	printf("Enter two numbers for swapping");
	printf("\nA= ");
	scanf("%d", &a);
	printf("\nB= ");
	scanf("%d", &b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swapping A=%d and B=%d\n",a,b);
	return 0;
}
