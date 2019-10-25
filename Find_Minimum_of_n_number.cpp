#include<stdio.h>
int main(){
	int x,i,min;
	scanf("%d",&x);
	int a[n];
	for(i=0;i<x;i++)
	{
	scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<x;i++)
	{
		if(min>a[i])
		{min=a[i];
		}
	}
	printf("%d",min);
	return 0;
}
