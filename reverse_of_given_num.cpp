#include<bits/stdc++.h>    // This is the main header
#include<iostream>
using namespace std;
int reverse_function(int x);
int main(){
   int num,rn;
   printf("\nEnter any number:");
   cin>>num;
   rn=reverse_function(num);
   cout<<"\nAfter reverse the no is :%d",rn;
   return 0;
}

int sum=0,rem;
reverse_function(int x){
   if(x){
      rem=x%10;
      sum=sum*10+rem;
      reverse_function(x/10);
   }
   else
      return sum;
   return sum;
}
