#include<stdio.h>

int main()
{
	int n,i,count=0;
	printf("Enter Number\n");
	scanf("%d",&n);
	for(i=0;i<32;i++)
	{
		if(n & (0x01<<31) )
			count++;
		n=n<<1;
	}
	printf("No of 1's:%d\n",count);

	return 0;
}
