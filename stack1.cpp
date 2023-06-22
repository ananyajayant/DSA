//Menu driven & asking for multiple insertion & deletion in stack.

#include<iostream>
#define MAX 10
 
using namespace std;
 
 
int STACK[MAX],TOP;
 
//initializing stack
void initStack(){
    TOP=-1;
}
//checking that empty or not(stack)
int isEmpty(){
    if(TOP==-1)
        return 1;
    else
        return 0;
}
 
//check stack is full or not
int isFull(){
    if(TOP==MAX-1)
        return 1;
    else   
        return 0;
}
 
void push(int num){
    if(isFull()){
        cout<<"STACK is FULL."<<endl;
        return; 
    }
    ++TOP;
    STACK[TOP]=num;
    cout<<num<<" has been inserted."<<endl;
}
 
void display(){
    int i;
    if(isEmpty()){
        cout<<"STACK is EMPTY."<<endl;
        return;
    }
    for(i=TOP;i>=0;i--){
        cout<<STACK[i]<<" ";
    }
    cout<<endl;
}
 
//pop - to delete an  item
void pop(){
    int temp;
    if(isEmpty()){
        cout<<"STACK is EMPTY."<<endl;
        return;
    }
     
    temp=STACK[TOP];
    TOP--;
    cout<<temp<<" has been deleted."<<endl;   
}
int main(){
    int num;
    initStack();
    char ch;
    do{
            int choice;
            cout<<"Choose \n1.push\n"<<"2.pop\n"<<"3.display\n";
            cout<<"Please enter any of the choice: ";
            cin>>choice;
            switch(choice)
            {
                case 1:
                    cout<<"Enter an Integer Number: ";
                    cin>>num;
                    push(num);
                break;
                 
                case 2: 
                    pop();
                    break;
                 
                case 3: 
                    display();
                    break;
                 
                default : 
                cout<<"An Invalid Choice!!!\n";
                 
                 
            }
            cout<<"Do you want to continue ?, press y or Y for continue & for exit, press any key  ";
            cin>>ch;                      
            }while(ch=='Y'||ch=='y');
    return 0;
}
