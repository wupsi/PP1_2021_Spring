#include <bits/stdc++.h>
using namespace std;

void Unique(){
    
    set<int> s;
    int n, cnt = 0, cnt1 = 0; cin >> n;
    int a[10000];

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        s.insert(x);
        cnt++;
    }


    set<int> :: iterator it;

    for(it = s.begin(); it != s.end(); it++){
        cnt1++;
    }

    if(cnt == cnt1) cout << "YES";
    else cout << "NO";

}

int main(){

    Unique();

}