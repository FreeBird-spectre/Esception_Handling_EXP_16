//Abir Seth
//PRN-24070123003
//ENTC A1

#include<iostream>
using namespace std;

int main(){
    float a, b, ans;

    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    try {
        if(b == 0) {
            throw b;
        }
        ans = a / b;
        cout << "Division is: " << ans;
    }
    catch(float) {
        cout << "Denominator cannot be zero.";
    }
    return 0;
}

Enter two numbers: 
4
9
Division is: 0.444444

=== Code Execution Successful ===
