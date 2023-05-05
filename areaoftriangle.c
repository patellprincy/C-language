#include<stdio.h>
int main()
{
	float length;
	float breath;
	float area;
	printf("Enter length:",length);
	scanf("%f",&length);
	printf("Enter breath:",breath);
	scanf("%f",&breath);
	
	area=0.5*length*breath;
	printf("the area is: %f",area);
}

