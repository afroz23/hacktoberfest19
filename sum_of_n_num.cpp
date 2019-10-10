#include<stdio.h>
int main()
{
	int n,i,j,sum=0;
	scanf("%d",&n);
	int a[n];
	for(i=n-1;i>=0;i--)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
	return 0;
}
