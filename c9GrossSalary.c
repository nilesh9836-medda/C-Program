#include<stdio.h>

int main(){
	float bp,da,hra,gs,pf;
	printf("Enter Basic pay: ");
	scanf("%f", &bp);

	hra=0.2*bp;
	da=0.4*bp;
	pf=0.12*bp;
	gs=bp+da+hra+pf;

	printf("Basic Pay = %.2f\n",bp);
	printf("Dearness Allowance = %.2f\n",da);
	printf("House Rent Allowance = %.2f\n", hra);
	printf("Provident Fund = %.2f\n", pf);
	printf("Gross Salary = %.2f\n", gs);

	return 0;
}
