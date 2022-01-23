#include <iostream>
using namespace std;

void sayHello(){
    cout << "Hello World" << endl;    
}

int addInts(int a, int b){
    return a+b;
}

float addFloats(float a, float b){
    return a+b;
}

template <typename T>
T add(T a, T b){
    return a+b;
}


int main(){

    // // Hello World
    // cout << "Hello World" << endl;
    // return 0;


    // Variables
    int age = 21;
    float weight = 60.12;
    char initial = 'a';
    string name = "Harshal";


    // Arrays
    int ages[5] = {19, 10, 8, 17, 15};
    float weights[4] = {10.01, 20.13, 40.21, 40.7};
    char initials[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
    string names[3] = {"Abel", "Alvaro", "Apollo."};
 

    // Basic Input/Output
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The number is " << num << endl;


    // Operators
    int a = 10, b = 3;

    // sum of a and b
    cout << "a + b = " << (a + b) << endl;

    // difference of a and b
    cout << "a - b = " << (a - b) << endl;

    // product of a and b
    cout << "a * b = " << (a * b) << endl;

    // division of a by b
    cout << "a / b = " << (a / b) << endl;
    // typecasting
    cout << "(float) a / b = " << (float) a / b << endl;

    // modulo of a by b
    cout << "a % b = " << (a % b) << endl;

    // a = a + 1; a++;

    int c = ++a;    // ++a == a = a + 1;
    int d = --b;    // --b == b = b - 1;

    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    d += c;     // d = d + c;
    cout << "d += c is " << d << endl;


    // If / else statements
    int age;
    cout << "Enter an age: ";
    cin >> age;
    if (age >= 18) {
        cout << "You can vote" << endl;
    } 
    else if (age < 0) {
        cout << "Enter a valid age" << endl;
    }
    else {
        cout << "You cannot vote" << endl;
    }


    // Loops
    
        cout <<  "Hello World" << endl;
        cout <<  "Hello World" << endl;
        cout <<  "Hello World" << endl;
        cout <<  "Hello World" << endl;
        cout <<  "Hello World" << endl;


    for (int i = 0; i < 5; i+=1) {
        cout << i << " Hello World" << endl;
    }

    int i = 0;
    while(i < 5){
        cout << i << " Hello World" << endl;
        i++;
    }


    // Functions

    sayHello();
    cout << addInts(5, 7) << endl;
    cout << addFloats(5.1, 7.0) << endl;


    // Function Templates

    cout << add<int>(5, 7) << endl;
    cout << add<float>(5.1, 7.0) << endl;

    return 0;
}
