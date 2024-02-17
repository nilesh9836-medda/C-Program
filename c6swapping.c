#include<stdio.h>

int main(){
	int a,b;
	printf("Enter number for A and B: ");
	scanf("%d%d", &a, &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swapping A=%d and b=%d\n",a,b);
	return 0;
}
