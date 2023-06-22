//To implement circular linked list 

#include <iostream>
#include <stdlib.h>
using namespace std;
struct node 
{
     int data;
     struct node *next;
};

void display(struct node* last) {
  struct node* p;
  if (last == NULL) {
  cout << "The list is empty" << endl;
  return ;
  }
  
  p = last->next;
  
  do {
  cout << p->data << " ";
  p = p->next;
  } while (p != last->next);
}

int main(){
    
// Initializing nodes 
struct node *last;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;
struct node *four =NULL;

// Allocating memory
one =(struct node *) malloc(sizeof(struct node));
two = (struct node *)malloc(sizeof(struct node));
three =(struct node *)malloc(sizeof(struct node));
four =(struct node *)malloc(sizeof(struct node));

// Assigning values to data  
one->data = 1111;
two->data = 999;
three->data = 888;
four->data = 777;

// Connecting nodes 
one->next = two;
two->next = three;
three->next = four;
four-> next = one;

// Saves address of fourth node in last 
last = four;

cout<<"Displaying the elements in circular linked list"<<endl;
display(last);
return 0;
}
