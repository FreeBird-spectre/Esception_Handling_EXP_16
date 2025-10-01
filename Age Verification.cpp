//Abir Seth
//ENTC A1
//PRN-24070123003

#include <iostream>
using namespace std;

int main() {
    float age;

    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 0) { 
            throw age;  // invalid case
        } 
        else if (age < 18) {
            throw age;  // below 18 case
        } 
        else {
            cout << "Accepted" << endl;
        }
    }
    catch (float age) {
        if (age < 0) {
            cout << "\nInvalid age" << endl;
        } 
        else {
            cout << "\nYou are below 18" << endl; 
        }
    }

    return 0;
}

Enter your age: 19
Accepted


=== Code Execution Successful ===

Enter your age: 8

You are below 18


=== Code Execution Successful ===
