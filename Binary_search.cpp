#include<iostream>
//#include<conio.h>
using namespace std;
int binary_search(int arr[], int size, int key);
int main(){
	int even[7] = {2,4,8,12,34,40,56};
	int odd[5] = {3,13,15,21,25};

	int even_index = binary_search(even, 7, 56);
	cout << "Index of 34 is: " << even_index << endl;

	//getch();
	return 0;
}

int binary_search(int arr[], int size, int key){
	int start = 0;
	int end = size - 1;

	int mid = (start + end) / 2;

	while(start <= end){
		if(arr[mid] == key){
			return mid;
		}
		// go to ringt part
		if(key > arr[mid]){
			start = mid + 1;
		}
		// go to left part
		if(key < arr[mid]){
			end = mid - 1;
		}
		

		mid = (start + end) / 2;
	}
	return -1;
} 