#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s + (e - s) / 2;
    int len1 = mid-s+1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    // merge 2 sorted arrays
    int indx1 = 0;
    int indx2 = 0;
    mainArrayIndex = s;

    while(indx1 < len1 && indx2 < len2){
        if(first[indx1] < second[indx2]){
            arr[mainArrayIndex++] = first[indx1++];
        }
        else{
            arr[mainArrayIndex++] = second[indx2++];
        }
    }

    while(indx1 < len1){
        arr[mainArrayIndex++] = first[indx1++];
    }
    while(indx2 < len2){
        arr[mainArrayIndex++] = second[indx2++];
    }


}

void mergeSort(int *arr, int s, int e){
    // base case
    if(s >= e){
        return;
    }

    int mid = s + (e -s) / 2;
    //left part sort
    mergeSort(arr, s, mid);

    //right part sort
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s,e);

}

int main(){
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter value : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    mergeSort(arr, 0, n-1);
    cout << "The sorted merge array are -> ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}