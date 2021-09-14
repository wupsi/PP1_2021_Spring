// Not a palindrome

#include <bits/stdc++.h>
using namespace std;
 
int main(){

    string str, sub, sub1; cin >> str;
    int cnt = 2;

    for(int i = 0; i < str.size(); i++){
        sub = str.substr(0, i);
        sub1 = sub;
        reverse(sub1.begin(), sub1.end());
        if(sub != sub1) cnt++;
    }
    if(cnt != 2) cout << cnt;
    else cout << 0;
}