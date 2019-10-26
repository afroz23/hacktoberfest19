#include<stdio.h>
int main(){
	int p,i,min;
	scanf("%d",&p);
	int a[n];
	for(i=0;i<p;i++)
	{
	scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<p;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("%d",min);
	
}
