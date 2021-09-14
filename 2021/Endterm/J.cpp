#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
vector<int> v;
cin >> n;
for(int i = 0; i < n; i++){
    int x; cin >> x;
    v.push_back(x);
}
int cnt = 0;
for(int i = 1; i < v.size()-1; i += 2){
    if(v[i+1] - v[i] >= 3) cnt++;
}
cout << cnt;
}