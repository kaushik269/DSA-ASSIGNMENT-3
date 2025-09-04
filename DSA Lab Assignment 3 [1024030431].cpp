//ques 1 -> menu drive program

/*#include <iostream>
using namespace std;
int stack[5];
int top=-1;

int isEmpty() {
    if(top==-1)
        return 1;   // true
    else
        return 0;   // false
}

int isFull() {
    if(top==4)
        return 1;   // true
    else
        return 0;   // false
}

void push(int value) {
    if(isFull()) {
        cout<<"Stack Overflow! Cannot push "<<value<<endl;
    }
	 else{
        top++;
        stack[top]=value;
        cout<<value<<" pushed into stack"<<endl;
    }
}

void pop() {
    if (isEmpty()) {
        cout<<"Stack Underflow! Nothing to pop"<<endl;
    } 
	else{
        cout<<stack[top]<<" popped from stack"<<endl;
        top--;
    }
}

void peek() { 
    if(isEmpty()) {
        cout<<"Stack is empty. No top element"<<endl;
    } 
	else {
        cout<<"Top element is : "<<stack[top]<<endl;
    }
}

void display() {
    if (isEmpty()) {
        cout<<"Stack is empty"<<endl;
    } 
	else{
        cout<<"Stack elements (top to bottom) : ";
        for(int i=top; i>=0; i--) {
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int choice;
	int value;

    while(1) {
        cout<<"STACK MENU"<<endl;;
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.isEmpty"<<endl;
        cout<<"4.isFull"<<endl;
        cout<<"5.Display"<<endl;
        cout<<"6.Peek"<<endl;
        cout<<"7.Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;

        if(choice==1) {
            cout<<"Enter value to push : ";
            cin>>value;
            push(value);
        } 
        else if(choice==2) {
            pop();
        } 
        else if (choice==3) {
            if (isEmpty())
                cout<<"Stack is Empty"<<endl;
            else
                cout<<"Stack is not Empty"<<endl;
        } 
        else if (choice==4) {
            if (isFull())
                cout<<"Stack is Full"<<endl;
            else
                cout<<"Stack is not Full"<<endl;
        } 
        else if (choice==5) {
            display();
        } 
        else if (choice==6) {
            peek();
        } 
        else if (choice==7) {
            cout<<"Exiting program"<<endl;
            break;
        } 
        else {
            cout<<"Invalid choice!"<<endl;
        }
    }
    return 0;
}*/


//ques 2 -> stack reverse

/*#include<iostream>
#include<string>
using namespace std;
char stack[20];
int top=-1;

void push(char c) {
    stack[++top] = c;
}

char pop(){
    return stack[top--];
}

int main(){
    string str;
    cout<<"Enter string : ";
    getline(cin, str);   

    for(int i=0; i<str.length(); i++) {
        push(str[i]);
    }

    cout<<"Reversed string is : ";
    while(top!=-1) {
        cout<<pop();
    }
    return 0;
}*/


 
