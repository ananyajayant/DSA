//Multiplication of two 2D arrays 

#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
 int mat1[20][20],mat2[20][20],mul[20][20];
 int m,n,r,s,i,j,k;
 cout<<"Enter the number of rows & columns for matrix 1"<<endl;
 cin>>m>>n;
 cout<<"Enter the number of rows & columns for matrix 2"<<endl;
 cin>>r>>s;
cout<<"Enter the values in matrix 1"<<endl;

  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
    cin>>mat1[i][j];
    }}
    cout<<"Enter the values in matrix 2"<<endl;
    for(i=0;i<r;i++)
    { for(j=0;j<s;j++)
    {
     cin>>mat2[i][j];
     }}
 if(n==r){
 for(i=0;i<m;i++)
 {
 for(j=0;j<s;j++)
 {
  for(k=0;k<n;k++)
  {
  mul[i][j]+=mat1[i][k]*mat2[k][j];
  }}}
  for(i=0;i<m;i++)
  {
  for(j=0;j<s;j++)
  {
  cout<<" "<<mul[i][j];
  if(j== s-1){
  cout<<endl; }
  }}
  }
  getch();
  }
