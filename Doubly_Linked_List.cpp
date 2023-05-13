#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void creat_Doubly_Linked_List(int n);
void Insert_In_begening();
void Insert_In_ending();
void Insert_In_Mid(int pos);
void display();
void printline();
void reverse_doubly_list();

class node{
public:
	int data;
	class node *prev;
	class node *next;
}*head, *newnode, *currentNode;

int main(){
	int n,pos;

	cout << "Enter the value of node: ";
	cin >> n;
	creat_Doubly_Linked_List(n);
	cout << "Forward doubly Linked List"<<endl;
	printline();
	display();
	printline();
	reverse_doubly_list();
	Insert_In_begening();
	printline();
	display();
	printline();
	Insert_In_ending();
	printline();
	display();
	printline();
	cout << "Enter the position where you want to insert newnode: ";
	cin >> pos;
	Insert_In_Mid(pos);
	printline();
	display();
	printline();
	//reverse_doubly_list();

	getch();
	return 0;

}
  // creat Linked List

void creat_Doubly_Linked_List(int n){
	int value, i;
	head = (class node*)malloc(sizeof(class node));

	cout << "Enter the value of node-1" << endl;
	cin >> value;

	head -> data = value;
	head -> next = NULL;
	head -> prev = NULL;
	currentNode = head;

	for(i=1; i<n; i++){
		newnode = (class node*)malloc(sizeof(class node));
		cout << "Enter the value of node-" << i+1 << endl;
		cin >> value;

		newnode -> data = value;
		newnode -> next = NULL;
		newnode -> prev = currentNode;
		currentNode -> next = newnode;
		currentNode = newnode;
	}

}
// Display Linked List

void display(){
	currentNode = head;
	while(currentNode != NULL){
		cout << currentNode -> data << "\t";
		currentNode = currentNode -> next;
	}
	cout << endl;
}
void printline(){
	int i;
	for(i=1; i<70; i++){
		cout << "-";
	}

	cout << endl;
}

void Insert_In_begening(){
	newnode = (class node*)malloc(sizeof(class node));
	cout << "Enter the value of beggening node: ";
	cin >> newnode -> data;
	newnode -> next = head;
	newnode ->prev = NULL;
	head = newnode;
}

void Insert_In_ending(){
	currentNode = head;
	while(currentNode -> next != NULL){
		currentNode = currentNode -> next;
	}

	newnode = (class node*)malloc(sizeof(class node));
	cout << "Enter the value of End node: ";
	cin >> newnode -> data;
	newnode -> next = NULL;
	newnode -> prev = currentNode;
	currentNode -> next = newnode;

}

void Insert_In_Mid(int pos){
	int i;
	currentNode = head;
	for(i=1; i<pos-1; i++){
		currentNode = currentNode -> next;
	}
	newnode = (class node*)malloc(sizeof(class node));
	cout << "Enter the value of mid node: ";
	cin >> newnode -> data;
	newnode -> next = currentNode -> next;
	newnode -> prev = currentNode;
	currentNode -> next = newnode;
}

void reverse_doubly_list(){
	cout << "Reverse doubly linked list"<<endl;
	currentNode = head;
	while(currentNode -> next != NULL){
		currentNode = currentNode -> next;
	}
	printline();
	while(currentNode != NULL){
		cout << currentNode -> data << "\t";
		currentNode = currentNode -> prev;
	}
	cout << endl;
	printline();
}