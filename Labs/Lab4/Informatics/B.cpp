#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int ma[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cin >> ma[i][j];
        }
    
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(ma[i][j] != ma[j][i]){
                cout << "no";
                 return 0;
            }
    cout << "yes";
}