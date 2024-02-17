#include<stdio.h>

int main(){
	int n,y,w,d;
	printf("Enter number of days: ");
	scanf("%d", &n);
	y=n/365;
	w=(n%365)/7;
	d=(n%365)%7;
	printf("%d = %d years, %d weeks, %d days\n",n,y,w,d);
}
