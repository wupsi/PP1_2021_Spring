#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m, sum = 0, cnt = 0; cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum += a[i][j];
        }
        if(sum == 0) cnt++;
        sum = 0;
    }

    cout << cnt;

}