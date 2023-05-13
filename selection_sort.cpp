#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
void printline();
int main()
{
	int n,i,j,temp,min_index;

	cout << "Enter array size: ";
	cin >> n;

	int arr[n];

	for(i=0; i<n; i++){
		cin >> arr[i];
	}

	for(i=0; i<n; i++){
		min_index = i;
		for(j=i+1; j<n; j++){
			if(arr[j] < arr[min_index]){
				min_index = j;
			}
		}

		temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
	}

	cout << "The selection sort is" << endl;
	printline();
	for(i=0; i<n; i++){
		cout << arr[i] << "\t"; 
	}
	cout << endl;
	printline();

	getch();
	return 0;
}

void printline(){
	int i;
	for(i=0; i<80; i++){
		cout << '-';
	}

	cout << endl;
}