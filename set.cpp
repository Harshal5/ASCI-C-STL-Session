#include<bits/stdc++.h>
using namespace std;

int main(){

    set<int> s;
    
    s.insert(5);    // O(logn)
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(auto i : s)
        cout << i << " ";
    cout << endl;

    cout << s.count(5) << endl;     // O(logn)
    cout << s.count(-5) << endl;

    return 0;
}