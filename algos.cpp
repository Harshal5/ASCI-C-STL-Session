#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(a) / sizeof(a[0]);
    
    vector<int> vect{ 101, 19, 30, 199 };
    
    // Sorting
    cout << "Before Sorting : " << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    sort(a, a + n);

    cout << "After Sorting : " << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;


    cout << "Before Sorting : " << endl;
    for (int x : vect)
        cout << x << " ";
    cout << endl;

    sort(vect.begin(), vect.end());

    cout << "After Sorting : " << endl;
    for (int x : vect)
        cout << x << " ";
    cout << endl;

    cout << "Descending Order : " << endl;
    sort(vect.begin(), vect.end(), greater<int>());
    for (int x : vect)
        cout << x << " ";
    cout << endl;


    // Searching
        int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

        vector<int> vect{ 101, 19, 30, 199 };

    sort(vect.begin(), vect.end());
    cout<< "Binary Search 19 in the vector : " << binary_search(vect.begin(), vect.end(), 19) << endl;
    cout<< "Binary Search 20 in the vector : " << binary_search(vect.begin(), vect.end(), 20) << endl;

    sort(a, a + n);
    cout<< "Binary Search 5 in the array : " << binary_search(a, a+n, 5) << endl;


    // Max and Min

    int x = 3, y = 5;

    cout << "Max between x, y : " << max(x,y) << endl;
    cout << "Min between x, y : " << min(x,y) << endl;
    

    cout << "Maximum element in the vector : " << *max_element(vect.begin(), vect.end()) << endl;
    cout << "Minimum element in the vector : " << *min_element(vect.begin(), vect.end()) << endl;

    cout << "Sum of the elements from position 0 : " << accumulate(vect.begin(), vect.end(), 0) << endl;


    cout << "Swap x and y : " << endl;
    swap(x, y);
    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;


    return 0;
}