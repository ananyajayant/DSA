// A linked list of  5 elements & displaying all elements. 


#include<iostream.h>
#include<conio.h>
#include<malloc.h>

struct Node
{
 int info;
 struct Node *p;
 };

 void main()
 {
   clrscr();
   struct Node *First =NULL;
   struct Node *Second =NULL;
   struct Node *Third =NULL;
   struct Node *Forth =NULL;
   struct Node *Fifth =NULL;
      //Memory allocation 
   First = (struct Node*)malloc (sizeof(struct Node));
   Second = (struct Node*)malloc (sizeof(struct Node));
   Third = (struct Node*)malloc (sizeof(struct Node));
   Forth = (struct Node*)malloc (sizeof(struct Node));
   Fifth = (struct Node*)malloc (sizeof(struct Node));
  //Assigning values & linking 
   First ->info =99;
   First ->p = Second;
   Second ->info = 88;
   Second ->p = Third;
   Third ->info = 77;
   Third ->p = Forth;
   Forth ->info = 66;
   Forth ->p =Fifth;
   Fifth ->info = 55;
   Fifth ->p =NULL;
  // Displaying elements
   struct Node *temp;
   temp = First;
   cout<<"Displaying the elements in Linked list "<<endl;
   while(temp!= NULL)
   {
    cout<<temp ->info<<endl;
    temp =temp ->p;
    }
    getch();
    }
