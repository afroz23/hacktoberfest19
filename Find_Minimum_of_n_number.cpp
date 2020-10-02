#include<stdio.h>
int main()
{
    int t,i,min;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<t;i++)
    {
        if(min>a[i])
	{
	    min=a[i];
	}
    }
    printf("\n%d",min);
    return 0;
}
