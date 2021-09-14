#include <iostream>
using namespace std;

bool printed[256];

int main (){
  string s; cin >> s;

    for(int i = 0; i < s.size(); ++i){
      if(!printed[s[i]]) cout << s[i];
      printed[s[i]] = 1;
 }
}