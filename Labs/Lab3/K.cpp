#include <iostream>
using namespace std;

int main(){

    int n; cin >> n; 
    int a[500500], arr[500500];

    for(int i = 0; i < n; i++){
        cin >> a[i];
        arr[a[i]] = 1;
    }

    for(int i = 0; i < n; i++){
        if(arr[a[i]] != 2){
            cout << a[i] << " ";
            arr[a[i]] = 2;
        }
    }
}