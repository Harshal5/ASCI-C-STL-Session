#include<bits/stdc++.h>
using namespace std;

int main(){

    deque<int> dq;
    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_front(15);

        // 15 20 10 30  
    cout << "The deque dq is : ";
    for (int x : dq)
        cout << x << " ";
    cout << endl;

    cout << "Size of the deque is : " << dq.size() << endl;;

    cout << "Element at position 2 : " << dq.at(2) << endl;
    cout << "Front : " << dq.front() << endl;
    cout << "Back : " << dq.back() << endl;
 
    dq.pop_front();
    cout << "Deque after pop_front : ";
    for (int x : dq)
        cout << x << " ";
    cout << endl;
 
    dq.pop_back();
    cout << "Deque after pop_back : ";
    for (int x : dq)
        cout << x << " ";
    cout << endl;

    return 0;
}