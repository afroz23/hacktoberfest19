#include<stdio.h>
int main()
{
    int n,i,min;
    scanf("%d",&n);				// enter a number
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];					// it holds array first value
    for(i=0;i<n;i++)
    {
        if(min>a[i])
	{
	    min=a[i];
	}
    }
    printf("\n%d",min);				// min number in a given array
    return 0;
}
