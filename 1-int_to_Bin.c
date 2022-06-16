#include<stdio.h>
int main()
{
	int n,num,a[10],i,j;
	printf("enter number:\n");
	scanf("%d",&num);
	 i=0;
	while(num)
	{
		a[i]=num%2;
		num=num/2;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
	printf("\n");
	return 0;
}
