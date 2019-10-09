#include<iostream.h>
void binary(int a[],int,int);
void main()
{
 int arr[10];
 for(int i=0;i<10;++i)
 {
  cout<<"Enter the element no "<<(i+1)<<" ";
  cin>>arr[i];
 }

 binary(arr,0,9);
}

void binary(int a[],int beg,int end)
{
 int num,flag=0;
 cout<<"Enter the element to be searched ";
 cin>>num;
 while(beg<=end)
 {
  int mid=((beg+end)/2);
  if(num==a[mid])
  {
	cout<<"The number is found at position "<<(mid+1);
	flag=1;
  }
  else if(num<a[mid])
  {
	end=mid-1;
  }
  else if(num>a[mid])
  {
	beg=mid+1;
  }
 }
 if(flag==0)
 {
  cout<<"The number is not found ";
 }
}
