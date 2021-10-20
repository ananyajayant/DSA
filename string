/* Program to display string input from user . */

#include<iostream>
using namespace std; 
int main()
{
    char string[25];
    cout<<"Enter string:";
    cin.get(string,25);
    cout<<string;
    return 0;
}

/* Program to store information about book using array of structures */

#include<iostream>
#include<stdio.h>
using namespace std; 
struct book{
	char BName[50];
	char BSubject[25];
	float Price;
	char BPublisher[50];
	char BAuthor[25];
};
int main()
{
	struct book obj[5];
	int i;
	cout<<"Enter records of 5 books:";
	for(i=0;i<5;i++){
		cout<<"\nEnter details of book "<<i+1;
	    cout<<"\nEnter Book Name:";
	    fflush(stdin);
	    cin.get(obj[i].BName,50);
	    cout<<"\nEnter Subject:";
	    fflush(stdin);
	    cin.get(obj[i].BSubject,25);
	    cout<<"\nEnter Price:";
	    fflush(stdin);
	    cin>>obj[i].Price;
	    cout<<"\nEnter Publisher:";
	    fflush(stdin);
	    cin.get(obj[i].BPublisher,50);
	    cout<<"\nEnter Author of the Book:";
	    fflush(stdin);
	    cin.get(obj[i].BAuthor,25);
	}
	cout<<"\n\n Book Information List:";
	for(i=0;i<5;i++){
		cout<<"\nDetails of book "<<i+1;
		cout<<"\nName:"<<obj[i].BName;
		cout<<"\nSubject:"<<obj[i].BSubject;
		cout<<"\nPrice:"<<obj[i].Price;
		cout<<"\nPublisher"<<obj[i].BPublisher;
		cout<<"\nAuthor:"<<obj[i].BAuthor;
		cout<<"\n";
	}
    return 0;
}
