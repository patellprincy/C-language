#include<stdio.h>
int main()
{
	int day;
	printf("Enter day:",day);
	scanf("%d",&day);

	switch (day)
{
	case 1:
		printf("Mon");
		break;
		case 2:
		printf("tue");
		break;
		case 3:
		printf("wed");
		break;
		case 4:
		printf("thu");
		break;
		case 5:
		printf("fri");
		break;
		
		default:
			printf("akkl");
}
}
