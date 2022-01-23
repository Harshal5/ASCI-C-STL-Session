#include<bits/stdc++.h>
using namespace std;

int main(){

    map <int, string> m;
    
    m[1]= "one";
    m[5]= "five";
    m[2]= "two";

    m.insert({3, "three"});
    
    for(auto i : m)
        cout << i.first << " " << i.second << endl;

    cout << m.count(5) << endl;
    cout << m.count(-5) << endl;
// 
    return 0;
}