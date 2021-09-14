#include <bits/stdc++.h>
using namespace std;

int main(){
string s;
cin >> s;
sort(s.begin(), s.end());
do{
    string t;
    for(int i = s.size()-1; i >= 0; i--){
        t.push_back(s[i]);
    }
    if(s == t){
        cout << "ZA WARUDO TOKI WO TOMARE";
        return 0;
    }
}
while(next_permutation(s.begin(), s.end()));
cout << "JOJO";
}