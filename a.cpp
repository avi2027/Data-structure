#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int>arr;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    
    auto mx = max_element(arr.begin(),arr.end());
    auto mn = min_element(arr.begin(), arr.end());
    cout << *mx <<endl;
    cout<< *mn << endl;
    
    sort(arr.begin(),arr.end());
    for(int i=0; i<n; i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
    
    sort(arr.begin(),arr.end(),greater<>());
    
    for(int i=0; i<n; i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
    
    int sum = 0;
    for(int i =0; i<n; i++){
        sum = sum + arr[i];
    }
    cout << sum << endl;
    
    cout << (double)sum / arr.size() << endl;
    
    return 0;
}