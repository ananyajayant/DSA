/* Program to implement stack using Array with push & pop operations on it */

using namespace std;
#include<iostream>
#include<process.h>
#define size 5
class stack{
	private:
		int num,tos;
		int x[size];
	public:
		stack(){
			tos=-1;
		}
		void push(int num);	
		void traverse();
		void pop();
};
void stack::push(int num){
	if(tos==size-1)	
	{
		cout<<"\nStack is full";
		return;
	}
	else{
		tos++;
		x[tos]=num;
		cout<<"\nElement inserted: "<<x[tos];
	}
}
void stack::traverse(){
	int i;
	if(tos==-1)
	{
		cout<<"\n\nStack is empty\n";
		return;
	}
	else{
		cout<<"\n\n";
		for(i=0;i<=tos;i++)
		{
			cout<<"->"<<x[i];
		}
		cout<<"\n";
	}
}
void stack::pop(){
	if(tos==-1)
	{
		cout<<"\nStack is empty\n";
		return;
	}
	else{
		num=x[tos];
		tos--;
		cout<<"\nDeleted element is:"<<num;
	}
}
int main(){
	int num;
	stack obj;
	obj.push(10);
	obj.push(20);
	obj.push(30);
	obj.traverse();
	obj.pop();
	obj.pop();
	obj.traverse();
	obj.pop();
	obj.traverse();
}


/* Program which is Menu driven & asking to you for multiple insertion & deletion in stack */

using namespace std;
#include<iostream>
#include<process.h>
#define size 5
class stack{
	private:
		int num,tos;
		int x[size];
	public:
		stack(){
			tos=-1;
		}
		void push(int num);	
		void traverse();
		void pop();
};
void stack::push(int num){
	if(tos==size-1)	
	{
		cout<<"Stack is full";
		return;
	}
	else{
		tos++;
		x[tos]=num;
		cout<<"\nElement inserted  "<<x[tos]<<endl;
	}
}
void stack::traverse(){
	int i;
	if(tos==-1)
	{
		cout<<"Stack is empty\n";
		return;
	}
	else{
		for(i=0;i<=tos;i++)
		{
			cout<<"->"<<x[i];
		}
		cout<<"\n";
	}
}
void stack::pop(){
	if(tos==-1)
	{
		cout<<"Stack is empty\n";
		return;
	}
	else{
		num=x[tos];
		tos--;
		cout<<"Deleted element is:"<<num;
	}
}
int main(){
	int choice,num;
	char ans;
	stack obj;
	do{
		cout<<"\nPress 1 to insert an element\n";
		cout<<"Press 2 to traverse.....\n";
		cout<<"Press 3 to Delete an element\n";
		cout<<"Press 4 exit\n";
		cout<<"Enter:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nEnter number to be inserted:";
				cin>>num;
				obj.push(num);
				break;
			case 2:
				obj.traverse();
				break;
			case 3:
				obj.pop();
				break;
			case 4:
				exit(0);
				break;
		}
		cout<<"\nDo you want to continue(y/n)???";
		cin>>ans;
	}while(ans=='y'||ans=='Y');
}
