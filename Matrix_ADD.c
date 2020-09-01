#include<stdio.h>//Coded by Sudip Basu
#include<conio.h>

int main()
{
	int a[100][100],b[100][100],c[100][100],i,j,n,n1;
	printf("\n\n\n\t+-----------------------------------------------------+");
	printf("\n\t|Implementation of Matrix Addition using C Programming|");
	printf("\n\t+-----------------------------------------------------+\n");
	printf("\tEnter the number of Rows:");
	scanf("%d",&n);
	printf("\tEnter the number of columns:");
	scanf("%d",&n1);
	printf("\tEnter the Elements in First Matrix:\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("Enter the value for [%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("\tEnter the Elements in Second Matrix:\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("Enter the value for [%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("------------------------------------------\n");
	printf("Elements of First Matrix:\n");
		for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");	
	}
	
		printf("Elements of Second Matrix:\n");
		for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n");	
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		}
			
	}
	printf("=======================================================\n");
	printf("Addition of First Elements and Second Elements are:\n");
		for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("\t%d",c[i][j]);
		}
		printf("\n");	
	}
	printf("=======================================================\n");
	printf("Coded by Sudip Basu");
	getch();
	return 0;
}

