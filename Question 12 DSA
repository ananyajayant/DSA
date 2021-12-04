// Insertion operation in doubly linked list

#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
  int data;
  struct node *prev;
  struct node *next;
};
struct node *head;

//Functions & their defintions 
void ins_beg ()
{
  struct node *ptr;
  int item;
  ptr = (struct node *) malloc (sizeof (struct node));
  if (ptr == NULL)
    {
      cout << "\nOVERFLOW";
    }
  else
    {
      cout << "\nEnter a value";
      cin >> item;

      if (head == NULL)
	{
	  ptr->next = NULL;
	  ptr->prev = NULL;
	  ptr->data = item;
	  head = ptr;
	}
      else
	{
	  ptr->data = item;
	  ptr->prev = NULL;
	  ptr->next = head;
	  head->prev = ptr;
	  head = ptr;
	}
      cout << "\nNode inserted\n";
    }
}

void ins_last ()
{
  struct node *ptr, *temp;
  int item;
  ptr = (struct node *) malloc (sizeof (struct node));
  if (ptr == NULL)
    {
      cout << "\nOVERFLOW";
    }
  else
    {
      cout << "\nEnter value";
      cin >> item;
      ptr->data = item;
      if (head == NULL)
	{
	  ptr->next = NULL;
	  ptr->prev = NULL;
	  head = ptr;
	}
      else
	{
	  temp = head;
	  while (temp->next != NULL)
	    {
	      temp = temp->next;
	    }
	  temp->next = ptr;
	  ptr->prev = temp;
	  ptr->next = NULL;
	}
    }
  cout << "\nnode inserted\n";
}

void ins_spec ()
{
  struct node *ptr, *temp;
  int item, loc, i;
  ptr = (struct node *) malloc (sizeof (struct node));
  if (ptr == NULL)
    {
      cout << "\n OVERFLOW";
    }
  else
    {
      temp = head;
      cout << "Enter the location";
      cin >> loc;
      for (i = 0; i < loc; i++)
	{
	  temp = temp->next;
	  if (temp == NULL)
	    {
	      cout << "\n There are less than elements" << loc;;
	      return;
	    }
	}
      cout << "Enter value";
      cin >> item;
      ptr->data = item;
      ptr->next = temp->next;
      ptr->prev = temp;
      temp->next = ptr;
      temp->next->prev = ptr;
      cout << "\nnode inserted\n";
    }
}

void display ()
{
  struct node *ptr;
  cout << "\n printing values...\n";
  ptr = head;
  while (ptr != NULL)
    {
      cout << ptr->data;
      ptr = ptr->next;
      cout << endl;
    }
}

int main ()
{
  int choice = 0;
  while (choice != 5)
    {
      cout << "----Program for doubly linked list (all insertion operations)----\n";
      cout << "Select the operation ...\n";
      cout <<"\n1.Insertion at beginning\n2.Insertion at last\n3.Insertion at specified location\n4.Display the elements\n5.End the program\n";
      cout << "Enter your choice!\n";
      cin >> choice;
      switch (choice)
	{
	case 1:
	  ins_beg ();
	  break;
	case 2:
	  ins_last ();
	  break;
	case 3:
	  ins_spec ();
	  break;
	case 4:
	  display ();
	  break;
	case 5:
	  exit (0);
	  break;
	default:
	  cout << "Please enter correct choice..";
	}
    }
}
