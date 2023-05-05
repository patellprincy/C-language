#include<stdio.h>
int main()
{
	float P;
	float R;
	float T;
	float SI;
	printf("Enter P:",P);
	scanf("%f",&P);
	printf("Enter R:",R);
	scanf("%f",&R);
	printf("Enter T:",T);
	scanf("%f",&T);
	
	SI=(P*R*T)/100;
	printf("the simple interest:%f",SI);
}
