#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
#define MAX 4
void push(int data);
int pop();
int stack[MAX];
int top = -1;

/* Main Function */

int main()
{	
	cout << "***Implenting the stack***" << endl;
	push(11);
	push(12);
	push(13);
	cout << "Pop Iteam " << pop() << endl;
	push(14);
	cout << "Pop Iteam " << pop() << endl;
	push(15);
	push(40);
	

	getch();
	return 0;
}

/* Push Function */

void push(int data){
	if(top < MAX - 1){
		top = top + 1;
		stack[top] = data;
		cout << "Succesfully aded Iteam : " <<  data << endl;
	}
	else{
		cout << "Exception! No spaces!" << endl;
	}
}

/* Pop Function */

int pop(){
	if(top >=0){
		int temp = stack[top];
		top = top - 1;
		return temp;
	}

	cout << "Exception! No spaces for top!" << endl;
	return -1; 
}
