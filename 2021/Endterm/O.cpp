#include <iostream>
using namespace std;

int n, cnt, a[10000],b[10000],c[10000];

void sol(int t[]){

    if(cnt == n){
        return;
    }
    
    a[cnt] = ((t[cnt]) | (t[cnt] + 1));
    b[cnt] = ((t[cnt]) & (t[cnt] + 1));
    
    cnt += 1;
    
    sol(t);
}
int main(){

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }

    sol(c);
    
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    
    cout << endl;
    
    for(int i = 0; i < n; i++){
        cout << b[i] << " ";
    }
}