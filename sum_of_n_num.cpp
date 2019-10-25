#include<iostream>
using namespace std;
int main()
{
	int n,i,j,sum=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	cout<<sum;
	return 0;
}
