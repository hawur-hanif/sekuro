#include <iostream>
using namespace std;

int main() {
    int n;
    string hasil ="";
    cout << "masukkan n: ";
    cin >> n;
    cout << endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<i+1; j++){
            cout << '*';
        }
        cout << endl ;
    }
    for (int i=0; i<n-1; i++){
        for (int j=n-1; j>i; j--){
            cout << '*';
        }
        cout << endl;
    }
    
    return 0;
}