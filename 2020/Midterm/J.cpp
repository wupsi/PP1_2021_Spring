// Matrix

#include <iostream>
using namespace std;

int main(){

    string str; cin >> str;
    int n, m, x = 1, y = 1; cin >> n >> m;
    char arr[n + 1][m + 1];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            arr[i][j] = 'X';
            arr[1][1] = '*';
        }
    }

    for(int k = 0; k < str.size(); k++){
        if(str[k] == 'D') x++;
        if(str[k] == 'R') y++;
        if(str[k] == 'L') y--;
        if(str[k] == 'U') x--;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                arr[x][y] = '*';
            }
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}