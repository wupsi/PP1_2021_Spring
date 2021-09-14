#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    string str, str1;
    char a[3][1001];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 3; j++){
            int x;
            cin >> str >> str1 >> x;
            a[i][j] = str + str1;
            a[i][j] = x;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}