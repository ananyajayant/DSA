//Insertion of a new node at the end of linked list

#include <iostream.h>
#include <conio.h>
#include <malloc.h>

// Creating a node
struct node {
  int info;
  struct node *link;
};

// print the linked list value
void print(struct node *p) {
  while (p != NULL) {
    cout<<p->info<<" ===> ";
    p = p->link;
  } cout<<"NULL";
}

int main() {
clrscr();
  // Initialize nodes
  struct node *FIRST;
  struct node *one = NULL;
  struct node *two = NULL;
  struct node *three = NULL;

  // Allocate memory
  one =(node*)malloc(sizeof(struct node));
  two = (node*)malloc(sizeof(struct node));
  three = (node*)malloc(sizeof(struct node));

  // Assign value values
  one->info = 999;
  two->info = 998;
  three->info = 997;

  // Connect nodes
  one->link = two;
  two->link = three;
  three->link = NULL;
  cout<<"Displaying the linked list before insertion "<<endl;
  // printing node-value
  FIRST = one;
  print(FIRST);
  cout<<endl;
  
  cout<<"Displaying the linked list after insertion at the end "<<endl;
  struct node *newnode;
  newnode =(node*) malloc(sizeof(struct node));
  newnode->info =996;
  newnode ->link = NULL;
  struct node *temp =FIRST;
  while(temp->link!=NULL){
  temp =temp->link;
  }
  temp->link=newnode;
  print(FIRST);

getch();
}
