#include <iostream>
using namespace std;

bool Election(bool x, bool y, bool z){
    bool arr[] = {x, y, z};
    int cnt = 0;
    for(int i = 0; i < 3; i++) if(arr[i]) cnt++;
    if(cnt > 1) return true;
    else return false;
}

int main(){

    int n, m, k; cin >> n >> m >> k;
    cout << (Election(n, m, k) ? 1 : 0);
}