#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float d,e;
	printf("Enter the value of a:-");
	scanf("%d",&a);
	printf("Enter the value of b:-");
	scanf("%d",&b);
	printf("Enter the value of c:-");
	scanf("%d",&c);
	d=(-b+sqrt(b*b-4*a*c))/2*a;
	e=(-b-sqrt(b*b-4*a*c))/2*a;
	printf("The value of x1 is%f",d);
	printf("The value of x2 is%f",e);
	return 0;
}
