#include <bits/stdc++.h>
using namespace std;

int same(int arr1[], int arr2[], int n){
    int cnt = 0, m = n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr1[i] == arr2[j]){
                arr2[j] = arr2[m - 1];
                m--;
                cnt++;
                break;
            }
        }
    }
    return cnt;
}

int main(){
    int n; cin >> n;
    int a[n], b[n];

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    cout << same(a, b, n);
}