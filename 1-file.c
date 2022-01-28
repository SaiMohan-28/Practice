#include<stdio.h>
int sum_arr(int *arr)
{
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum+=*(arr+i);
	}
	return sum;
}
int main()
{
	int arr[5]={1,2,3,4,5};
	printf("sum=%d\n",sum_arr(arr));
	return 0;
}
