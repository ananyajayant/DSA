//To implement stack using Array wid push & pop operations on it.

#include <iostream>
using namespace std;

#define MAX 20

int top = -1;
int arr[MAX];
void push (int item) 
{
  if (top == MAX -1)
    {
     cout << "Stack Overflow";
      return;
    }
  else
    {
	//Insert the element in a stack
	arr[++top] = item;
    cout << "Value inserted in stack is " << item << endl;
     }
}

void pop () 
{
int val;
if (top == -1)
    {
cout << "Stack underflow";
return;
     }
  else
    {
val = arr[top];
      --top;
}
cout << "Value deleted from stack is " << val << endl;
}

int main () 
{
  //Inserting value in stack
    push (99);
    push (90);
    push (78);
    push (35);
    push (34);
  
    //Deleting value from stack
    pop ();
    pop ();
  
   push (45);
   pop ();
   return 0;
}
