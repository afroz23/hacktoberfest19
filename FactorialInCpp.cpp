//calculating factorial of any number
#include<iostream>			// header file
#include<conio.h>
int main()
{
	int n,i,fact=1;
	scanf("%d",&n);			// enter a number
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);		// factorial of a given number
}
