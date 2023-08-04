//#include<bits/stdc++.h>
#include<iostream>
//#include<conio.h>
using namespace std;
void printline();
int main()
{
	int i,j,n,swap,flag,count=0,count_1=0;
	cout << "Enter array size: ";
	cin >> n;
	int arr[n];
	cout << "Enter value: ";
	for(i=0; i<n; i++){
		cin >> arr[i];
	}

	for(i=0; i<n-1; i++){
		flag = 0;
		count++;
		for(j=0; j<n-i-1; j++){
			if(arr[j] > arr[j+1]){
				swap = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = swap;
				flag = 1;
			}
			count_1++;
		}

		if(flag == 0){
			break;
		}
	}

	cout << "The bubble sort is\n";
	printline();
	for(j=0; j<n;j++){
		cout << arr[j]<< "\t" ;
	}
	cout << endl;
	printline();
	cout << "Total outer loop count "<< count << endl;
	cout << "Total inner loop count "<< count_1 << endl;

	//getch();
	return 0;
}

void printline(){
	int i;
	for(i=0; i<80; i++){
		cout << '-';
	}

	cout << endl;
}