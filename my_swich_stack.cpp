#include<iostream>
//#include<conio.h>
#include<stdlib.h>
using namespace std;

bool is_emty();
void push(int data);
void pop();
void show_top();
void dispaly_stack();

#define MAX 5
int stack[MAX];
int top = - 1;

int main(){
	int choice, flag=1, data;
	while(flag == 1){
		cout << "1.push 2.pop 3.show top 4.Dispaly stack 5.Exit" << endl;
		cin >> choice;
		switch(choice){
			case 1:
					cout << "Enter value: ";
					cin >>data;
					push(data);
					break;
			case 2:
					pop();
					break;
			case 3:
					show_top();
					break;
			case 4:
					dispaly_stack();
					break;
			case 5:
					flag = 0;
					break;

		}

	}

	//getch();
	return 0;
}

bool is_emty(){
	if(top == -1){
		return true;
	}
	else{
		return false;
	}
}

void push(int data){
	if(top == MAX - 1){
		cout << "Stack is full" << endl;
	}
	else{
		top = top + 1;
		stack[top] = data;
	}
}

void pop(){
	if(is_emty()){
		cout << "Stack is ematy" << endl;
	}
	else{
		top = top - 1;
	}
}

void show_top(){
	if(is_emty()){
		cout << "stack is ematy"<< endl;
	}
	else{
		cout <<"The top of the stak is " << stack[top] << endl;
	}
}

void dispaly_stack(){
	if(is_emty()){
		cout << "Stack is ematy!" << endl;
	}
	else{
		for(int i=0; i<=top; i++){
			cout << stack[i]<< "\t";
		}
		cout << endl;
	}
}