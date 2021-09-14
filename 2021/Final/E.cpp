#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    set<char> ans;

    for(int i = 0; i < a.size(); i++){
        if(b.find(a[i]) != -1 && c.find(a[i]) != -1) ans.insert(a[i]);
    }
    
    for(auto i : ans) cout << i;
}