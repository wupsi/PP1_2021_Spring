// Deque

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Deque(){

    string str;
    vector<int> v, t;
    int arr[500];

    while(str != "!"){
        getline(cin, str);
        
        for(int i = 0; i < str.size(); i++){
            if(str[i] == '+'){ 
                str[i + 2] -= '0';
                v.insert(v.begin(), str[i + 2]);
            }
            if(str[i] == '-'){
                str[i + 2] -= '0';
                v.push_back(str[i + 2]);
            }
            if(str[i] == '*'){
                t.push_back(v[0] + v[v.size() - 1]);
                if(v.size() <= 2) break;
                v.erase(v.begin() + 0);
                v.erase(v.begin() + v.size() - 1);
            }
        }
    }

    if(t[t.size() - 2] == t[t.size() - 1]){
        for(int i = 0; i < t.size() - 1; i++){
            cout << t[i] << endl;
        }
    }
    else{
        for(int i = 0; i < t.size(); i++){
            cout << t[i] << endl;
        }
    }
}

int main(){

    Deque();
}