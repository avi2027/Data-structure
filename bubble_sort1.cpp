#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
void printline();
int main(){
	int n,i,j,temp;
	cout << "Enter a value: ";
	cin >> n;

	int a[n];
	for(i=0; i<n; i++){
		cin >> a[i];
	}

	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	cout << "Bubble sorting" << endl;
	printline();
	for(j=0; j<n; j++){
		cout << a[j] << "\t";
	}
	cout << endl;
	printline();

	getch();
	return 0;
}

void printline(){
	int i;
	for(i=0; i<45; i++){
		cout << '-';
	}

	cout << endl;
}

