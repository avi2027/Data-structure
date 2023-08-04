#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout << "Enter the row and colum: ";
    cin >> n;
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            cout << "* ";
        }
        cout << " ";
        cout << endl;
    }

    cout << endl;
    return 0;

}