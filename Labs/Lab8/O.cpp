#include <iostream>
#include <set>
using namespace std;

int main(){
    string str; cin >> str;
    set<int> se;
    for(int i = 0; i < str.size(); i++){
        se.insert(tolower(str[i]));
    }
    cout << se.size() << endl;
    for(set<int> :: iterator it = se.begin(); it != se.end(); it ++){
        cout << (char)*it << " ";
    }

}