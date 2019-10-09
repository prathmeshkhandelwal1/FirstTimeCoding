#include<iostream.h>
#include<math.h>

void main()
{
    int num,n;
    float digit,arm=0;
    cout<<"Enter the no of to be checked";
    cin>>num;
    n=num;
    do
    {
	digit=n%10;
	arm=arm+pow(digit,3);
	n=n/10;
    }while(n!=0);
    if(arm==num)
       cout<<"The number is an armstrong number";
    else
    cout<<"The number is not an armstrong number";
}
