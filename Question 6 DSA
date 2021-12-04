#include<iostream.h>
#include<conio.h>
#include<string.h>
//For college books
struct book{
int p_year; //Year of publishing
char author[100];
char name[100]; //Name of book
char subject[100]; //Name of subject
char y_n;
int pages,vpages[50];// pages is for only no. of pages in book & vpages is for no. of pages in volume of book 
int Volumes;// No. of volumes in book
void entry(); 
void display(); 
}k; //for accessing the structure elements 

void entry(book k[],int n)
{
int i;
for(i=0;i<n;i++){
cout<<"Filling the entries of book no. "<<i+1<<endl;
cin.ignore();
cout<<"Enter the name of subject "<<endl;
cin.getline(k[i].subject,100);
cout<<"Enter the name of book "<<endl;
cin.getline(k[i].name,100);
cout<<"Enter the Author's name "<<endl;
cin.getline(k[i].author,100);
cout<<"Enter the year of publishing "<<endl;
cin>>k[i].p_year;
cout<<"Does this book have volumes ?, press 'y' for yes & press 'n' for no "<<endl;
cin>>k[i].y_n;
if(k[i].y_n=='y')
{
 cout<<"Enter the number of volumes "<<endl;
 cin>>k[i].Volumes;
 for(int j=0;j<k[i].Volumes;j++){
 cout<<"Enter the pages in Volume "<<j+1<<endl;
 cin>>k[i].vpages[j];
			 }
}
else{
cout<<"Enter the pages in Book "<<endl;
cin>>k[i].pages;
}
 }}

void display(book k[],int n){
cout<<"Enter the number of books "<<endl;
cin>>n;
cout<<endl;
cout<<"\t";
cout<<"Displaying The entered books details "<<endl;
for(int i=0;i<n;i++){
cout<<"\t Entered details of book no. "<<i+1<<endl;
cout<<"This Book is for "<<k[i].subject<<endl;
cout<<"Author of this book is "<<k[i].author<<endl;
cout<<"Name of the book is "<<k[i].name<<endl;
cout<<"In "<<k[i].p_year<<" , This book is get published "<<endl;
if(k[i].y_n=='y')
{
 cout<<"No. of Volumes = "<<k[i].Volumes<<endl;
 for(int j=0;j<k[i].Volumes;j++){
 cout<<"Volume "<<j+1<<" having = "<<k[i].vpages[j]<<" pages. "<<endl;
 }  }
 else{
 cout<<"Pages in book = "<<k[i].pages<<endl;}
}
}

void main()
{
clrscr();
int n;
book k[20];
cout<<"Enter the number of books ";
cin>>n;
cout<<endl;
entry(k,n);
display(k,n);
getch();
}
