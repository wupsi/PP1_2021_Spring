#include <iostream>
using namespace std;

int main(){
    string s, sub; cin >> s >> sub;

    for(int i = 0; i < s.size(); i++){
        int cnt = 0;
        if(sub[0] == s[i]){
            for(int j = 0; j < sub.size();j++){
                if (s[j + i] == sub[j]) cnt++;
            }
        }
        if(cnt == sub.size()){
            cout << "YES";
            return 0;
        }
    
        // sol with s.substr()
        // if(s.substr(i, sub.size()) == sub){
        //     cout << "YES";
        //     return 0;
        // }
    
    // sol with s.find()
    // int pos = s.find(sub);
    // if(pos != -1 and s.substr(pos, sub.size()) == sub) cout << "YES";
    // else cout << "NO";    
    
    }
    cout << "NO";
}
