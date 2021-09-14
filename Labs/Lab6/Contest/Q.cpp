#include <iostream>
using namespace std;

void percentage(int a, int b){
    cout << (float)b / a * 100;
}

int main(){
    int n, m; cin >> n >> m;
    percentage(n,m);
}