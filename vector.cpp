#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>v;
    for(int i=1; i<=5; i++){
        v.push_back(i);
    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout << endl;
    /*    Reverse the array    */
    cout << "Reverse the array -> ";
    for(int i = v.size() - 1; i>=0; i--){
        cout<<v[i]<<" ";
    }
    cout << endl;

    cout<<"Element at 2nd index "<< v.at(1) << endl;

    cout << "Front -> " << v.front() <<endl;
    cout << "Back -> " << v.back() <<endl;

    //Before pop back
    cout << "Before pop back -> ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    // After pop back
    v.pop_back();
    cout <<endl;
    cout << "After pop back -> ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    return 0;
}