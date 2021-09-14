// Interview

#include <iostream>
using namespace std;

int main(){

    int n, x; cin >> n >> x;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(arr[i] + arr[j] == x){
                cout << "YES";
                exit(0);
            }
        }
    }
    cout << "NO";
}