#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
int size,arr[100],key,i;   // global variable
int binary_search();
void printline();
int main()
{
	cout << "Enter array Size: ";
	cin >> size;
	for(i=0; i<size; i++){
		cin >> arr[i];
	}

	cout << "Which value you are see: ";
	cin >> key;
	int element_search = binary_search();
	printline();
	if(element_search == -1){
		cout << "\tElement not Found!" << endl;
	}
	else{
		cout <<"\tIndex of " << key <<" is: " << element_search << endl;
	}
	getch();
	return 0;

}

int binary_search(){
	int start = 0;
	int end = size;

	// int mid = (start + end) / 2; // small integer value

	int mid = start + (end - start) / 2; // Big integer value
	while(start <= end){
		if(key == arr[mid]){
			return mid;
		}

		// go to right part
		if(key > arr[mid]){
			start = mid + 1;
		}

		// go to left side
		if(key < arr[mid]){
			end = mid - 1;
		}
		
		mid = start + (end - start) / 2;
	}

	return -1;
}

void printline(){
	int i;
	for(i=1; i<=36; i++){
		cout << '-';
	}

	cout << endl;
}