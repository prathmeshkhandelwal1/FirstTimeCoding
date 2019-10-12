#include<stdio.h>
//program to find nth fiboonaci number where first no is 0 and second is 1
int fibo( int n)
{  int p=1, a=0 ,b=1,c;
	if (n==1)
	{return 0;}
	if (n==2)
	{return 1;}
	for(int i=1; i<=n-2 ; i++)
	{   c=a+b;
	    a=b;
		b=c;
	
	}
	return c;
}
int main()
{
	int n,f;
	printf("enter the no get nth  fiboonaci number----");
	scanf("%d",&n);
	f=fibo(n);
	printf("nth fiboonaci number is ---%d",f);
	
	return 0;
}