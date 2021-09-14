#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int m, cnt = 0; cin >> m;

    for(int i = 0; i < n; i++){
        if(a[i] >= m) cnt++;
    }

    cout << cnt;
}