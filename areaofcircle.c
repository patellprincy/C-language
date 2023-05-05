#include<stdio.h>
int main()
{
	float radius;
	float area;
	printf("Enter radius:",radius);
	scanf("%f",&radius);
	
	area=3.14*radius*radius;
	printf("the area is: %0.2f",area);
//%0.2f display only the last two digits after point	
}
