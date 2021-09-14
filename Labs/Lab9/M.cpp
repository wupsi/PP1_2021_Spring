#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n; cin >> n;
    string name;
    queue<string> q;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x == 1){
            cin >> name;
            q.push(name);
        }
        else q.pop();
        if(q.empty()) cout << "queue is empty" << endl;
        else cout << q.front() << endl;
    }
}