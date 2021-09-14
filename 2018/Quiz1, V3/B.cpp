#include <iostream>
using namespace std;

int main(){

    int n, sum = 0, max1 = -1e9, max2 = -1e9, cnt = 0, cnt1 = 0; cin >> n;
    int vol[n + 1], cap[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> vol[i];
        sum += vol[i];
    }

    for(int i = 1; i <= n; i++){
        cin >> cap[i];
        if(cap[i] >= max1) max1 = cap[i];
    }

    for(int i = 1; i <= n; i++){
        cnt++;
        if(cap[i] == max1) break;
    }

    for(int i = 1; i <= n; i++){
        cnt1++;
        if(cap[i] >= max2 and cnt != cnt1) max2 = cap[i];
    }

    if(max1 + max2 >= sum) cout << "YES";
    else cout << "NO";

}