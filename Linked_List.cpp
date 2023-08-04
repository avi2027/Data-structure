//#include<bits/stdc++.h>
#include<iostream>
//#include<conio.h>
#include<stdlib.h>
using namespace std;
void creat_linked_list(int n);
void insert_In_Begening();
void insert_In_Mid(int position);
void insert_In_End();
void delation_In_Begening();
void delation_In_Mid(int pos);
void delation_In_End();
void display();
int element_search();
void printline();
void counting_node();
int key;
class node{
public:
	int data;
	class node *next;
}*head, *currentNode, *newnode, *current, *previous;

int main()
{
	int n,position,pos;
	cout << "Enter the value of node: ";
	cin >> n;
	creat_linked_list(n);
	printline();	
	display();
	printline();
	insert_In_Begening();
	cout << "After Insert the begening node" << endl;
	printline();
	display();
	printline();
	cout << "Enter the position where you want to insert the new node" << endl;
	cin >> position;
	insert_In_Mid(position);
	cout << "After insert the mid node"<< endl;
	printline();
	display();
	printline();
	insert_In_End();
	cout << "After insert the End node" << endl;
	printline();
	display();
	delation_In_Begening();
	cout << "After Delating the first node" << endl;
	printline();
	display();
	printline();
	cout << "Enter the position where you want to delation the new node" << endl;
	cin >> pos;
	delation_In_Mid(pos);
	cout << "After Delating the Mid node" << endl;
	printline();
	display();
	printline();
	delation_In_End();
	cout << "After Delating the End node" << endl;
	printline();
	display();
	printline();
	cout << "Which element do you want to see: ";
	cin >> key;
	int element = element_search();
	printline();
	if(element == -1){
		printf("\tIteam not Found!!\n");
	}
	else{
		printf("\tIteam found at position: %d\n", element+1);
	}

	counting_node();
	//getch();
	return 0;
}
	/* Create Linked List */

void creat_linked_list(int n){
	int value,i;
	head = (class node*)malloc(sizeof(class node));	

	cout << "Enter the value of node-1"<<endl;
	cin >> value;
	head->data = value;
	head->next = NULL;
	currentNode = head;

	for(i=1; i<n; i++){
		newnode = (class node*)malloc(sizeof(class node));
		cout << "Enter the value of node-"<< i+1<< endl;
		cin >> value;
		newnode->data = value;
		newnode->next = NULL;
		currentNode->next = newnode;
		currentNode = newnode;
	}
}

	/* Dispaly Linked List */

void display(){
	currentNode = head;
	//cout << "The Linked list is:" << endl;

	while(currentNode != NULL){
		cout << currentNode->data << "\t";
		currentNode = currentNode->next;
	}
	cout << endl;
}

	/* Value Insert int Begening node */

void insert_In_Begening(){
	newnode = (struct node*)malloc(sizeof(struct node));
	cout << "Enter the value insert in begening node: " << endl;
	cin >> newnode->data;
	newnode->next = head;
	head = newnode;
}

	/* Value insert int middle node */

void insert_In_Mid(int position){
	int i;
	currentNode = head;
	
	for(i=1; i<position-1; i++){
		currentNode = currentNode->next;
	}
	newnode = (struct node*)malloc(sizeof(struct node));
	cout << "Enter the value insert in mid node" << endl;
	cin >> newnode->data;
	newnode->next = currentNode->next;
	currentNode->next = newnode;
}

	/* Value insert in End node */

void insert_In_End(){
	currentNode = head;
	while(currentNode->next != NULL){
		currentNode = currentNode->next;
	}
	newnode = (struct node*)malloc(sizeof(struct node));
	cout << "Enter the value insert in End node" << endl;
	cin >> newnode->data;
	newnode->next = NULL;
	currentNode->next = newnode;
}

/* Ellement Searching in Linked List */

int element_search(){
	int element = 0;
	currentNode = head;
	while(currentNode != NULL){
		if(key == currentNode->data){
			return element;
		}
		currentNode = currentNode->next;
		element++;
	}
	return -1;	
}
 	/* '----' for decoration */

void printline(){
	int i;
	for(i=1; i<=70; i++){
		cout << '-';
	}
	cout << endl;
}

	/* Begening value Delation */

void delation_In_Begening(){
	current = head;
	head = head->next;
	free(current);
}

	/* Middle value Delation */

void delation_In_Mid(int pos){
	int i;
	for(i=1; i<pos; i++){
		previous = current;
		current = current->next;
	}
	previous->next = current->next;
	free(current);
}

	/* Ending value Delation */ 

void delation_In_End(){
	current = head;
	while(current->next != NULL){
		previous = current;
		current = current->next;
	}

	free(current);
	previous->next = NULL;
}
	// Node counting 

void counting_node(){
	int count = 0;
	currentNode = head;

	while(currentNode != NULL){
		currentNode = currentNode -> next;
		count++;
	}

	cout << "The total node is: " << count;
}

