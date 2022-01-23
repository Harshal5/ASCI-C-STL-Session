#include<bits/stdc++.h>
using namespace std;

int main(){

    // Vectors

    // //  Initializing by pushing values one by one 
    vector<int> vect;

    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
    vect.push_back(40);
    vect.push_back(50);

    cout << "Size of the vector: " << vect.size() << endl;
    cout << "Capacity of the vector: " << vect.capacity() << endl;
    
    // vect == 10 20 30
    // l = [10, 20 ,30]
    // for x in l:
    //     print(x)

    for (int x : vect)
        cout << x << " ";
    cout << endl;

    // Specifying size and initializing all values 
    int n = 3;
 
    vector<int> vect(n, 10);    // vector of size 3, and all values initialized to 10
 
    for (int x : vect)
        cout << x << " ";
    cout << endl;

    // Initializing like arrays

    vector<int> vect{ 10, 20, 30 };
 
    for (int x : vect)
        cout << x << " ";
    cout << endl;
    
    vect.push_back(9);


    cout << "Element at position 2 is : " << vect.at(2) << endl;
    cout << "Element at position 2 is : " << vect[2] << endl;   // accessed like an array

    cout << "Front : " << vect.front() << endl;
    cout << "Back : " << vect.back() << endl;

    vect.pop_back();
    cout << "Vector after pop_back: ";
    for (int x : vect)
        cout << x << " ";
    cout << endl;

    cout << "Output of begin and end: ";
    for (auto i = vect.begin(); i != vect.end(); ++i)
        cout << *i << " ";
    cout << endl;

    cout << "Output of rbegin and rend: ";
    for (auto ir = vect.rbegin(); ir != vect.rend(); ++ir)
        cout << *ir << " ";
    cout << endl;

    vect.insert(vect.begin(), 3);
    cout << "Vector after Insert : ";
    for (int x : vect)
        cout << x << " ";
    cout << endl;

    vect.erase(vect.begin());
    cout << "Vector after Erase : ";
    for (int x : vect)
        cout << x << " ";
    cout << endl;

    vect.clear();
    cout << "Vector after Clear : ";
    for (int x : vect)
        cout << x << " ";
    cout << endl;

    if(vect.empty() == true)
    cout << "Vector is empty" << endl;     

    vector<int> v1 = {1,2};
    vector<int> v2 = {3,4};
    v1.swap(v2);
    cout << "Vectors after Swap : " << endl;
    cout << "v1 : ";
    for (int x : v1)
        cout << x << " ";
    cout << endl;

    cout << "v2 : ";
    for (int x : v2)
        cout << x << " ";
    cout << endl;


    return 0;
}