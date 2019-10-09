#include<iostream.h>
int main()
{
 int n, m;
 cout<<"Enter the no of rows of the original matrix";
 cin>>n;
 cout<<"Enter the no of columns ";
 cin >>m;
 int a[n][m],b[m][n],i,j;
 cout<<"Enter the elements of the matrix ";
 for(i=0;i<4;++i)
 {
  for(j=0;j<3;++j)
  {
	cin>>a[i][j];
  }
 }
 for(i=0;i<4;++i)
 {
  cout<<"\n";
  for(j=0;j<3;++j)
  {
	cout<<a[i][j]<<" ";
  }
 }
 for(i=0;i<3;++i)
 {
  for(j=0;j<4;++j)
  {
	b[i][j]=a[j][i];
  }
 }
 for(i=0;i<3;++i)
 {
  cout<<"\n";
  for(j=0;j<4;++j)
  {
	cout<<b[i][j]<<" ";
  }
 }

 return 0;
}
