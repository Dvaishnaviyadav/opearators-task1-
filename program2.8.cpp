
#include<stdio.h>
int main()
{
	int a,b,sum,difference,multiplication,divison,percentage;
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	sum=a+b;
	printf("sum of %d and %d =%d",a,b,sum);
	difference=a-b;
	printf("difference of %d and %d =%d",a,b,difference);
	multiplication=a*b;
	printf("multiplication of %d and %d =%d",a,b,multiplication);
	divison=a/b;
	printf("divison of %d and %d =%d",a,b,divison);
	percentage=a%b;
	printf("percentage of %d and %d =%d",a,b,percentage);
	return 0;
}
