#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void creat_Linked_List(int n);
void reverse_singly_list();
void display();
void printline();

class node
{
public:
	int data;
	class node* next;
	
}*head, *currentNode, *newnode, *temp, *prev;
int main()
{
	int n;
	cout<<"Enter the value of node: ";
	cin >> n;
	creat_Linked_List(n);
	cout << "The Linked List is" << endl;
	printline();
	display();
	printline();

	getch();
	return 0;
}

void creat_Linked_List(int n){
	int value, i;
	head = (class node*)malloc(sizeof(class node));

	cout << "Enter the value of node-1"<<endl;
	cin >> value;
	head->data = value;
	head->next = NULL;
	currentNode = head;

	for(i=1;i<n;i++){
		newnode = (class node*)malloc(sizeof(class node));
		cout << "Enter the value of node-"<< i+1 << endl;
		cin >> value;
		newnode->data = value;
		newnode->next = NULL;
		currentNode->next = newnode;
		currentNode = newnode;

	}

}
void reverse_singly_list(){
	currentNode = head;
	prev = NULL;
	temp = NULL;

	while(currentNode != NULL){
		temp = currentNode -> temp;
		currentNode -> next = prev;
		prev = currentNode;
		currentNode = temp;
	}

	head = prev;
}
void display(){
	currentNode = head;
	while(currentNode != NULL){
		cout << currentNode->data << "\t";
		currentNode = currentNode->next;
	}
	cout << endl;
}

void printline(){
	int i;
	for(i=1; i<=44; i++){
		cout << '-';
	}
	cout << endl;
}