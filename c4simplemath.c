#include<stdio.h>

int main(){
	int a,b,sm,sb,ml,dv;
	printf("Enter two numbers to do simple math:");
	scanf("%d%d", &a, &b);
	sm=a+b;
	sb=a-b;
	ml=a*b;
	dv=a/b;
	printf("addition=%d\nsubtraction=%d\nmultiplication=%d\ndivision=%d\n",sm,sb,ml,dv);
	return 0;
}

