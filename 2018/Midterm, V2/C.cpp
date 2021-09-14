// Chess matrix

#include <iostream>
using namespace std;

int main(){

    int n, m, k = 0; cin >> n >> m;
    int arr[n + 1][m + 1];

    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= m; j++){
            if(k % 2 == 0) cout << 1;
            else cout << 0;
            k++;
        }
        cout << endl;
        if(m % 2 == 1) k += 2;
        else k++;
    }
}