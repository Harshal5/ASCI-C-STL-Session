#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int> l;
    l.push_back(10);
    l.push_front(20);
    l.push_back(30);
    l.push_front(15);

    cout << "The list l is : ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    cout << "Size of the list is : " << l.size() << endl;;

    // cout << "Element at position 2 : " << l.at(2) << endl; // DIRECT ACCESS IS NOT POSSIBLE
    cout << "Front : " << l.front() << endl;
    cout << "Back : " << l.back() << endl;
 
    l.reverse();
    cout << "List after reversed : ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    l.pop_front();
    cout << "List after pop_front : ";
    for (int x : l)
        cout << x << " ";
    cout << endl;
 
    l.pop_back();
    cout << "List after pop_back : ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    return 0;
}