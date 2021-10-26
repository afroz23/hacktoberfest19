//calculating factorial of a number
#include<bits/stdc++.h>    // This is the main header
#include<iostream>
using namespace std;
int main()
{
	int fact=1,n,i;
	cout<<"Enter a Number"<<endl;      // enter a number
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"Factorial of "<<n<<" is: "<<fact;        // factorial of a given number
	return 0;
}
/* 
Note: we cannot calculate large number factorial
Eg.58,99.
these number's factorial are very big number so we can't store it in a variable.Finding those number factorial of the diffrent approch:)
*/
