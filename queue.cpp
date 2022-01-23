#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<int> q;
    
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    
    q.pop();
 
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}