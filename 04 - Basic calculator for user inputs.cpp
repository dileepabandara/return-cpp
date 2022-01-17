//
// Developed by
// Dileepa Bandara
// ©dileepabandara.dev
// https://github.com/dileepabandara
//

#include<iostream>

using namespace std;

int main() {
    int a, b, add, sub, mul, div;
    cout << " Input 2 numbers for the calculations \n" << endl;
    cout << " Input your 1st number: ";
    cin >> a;
    cout << " Input your 2nd number: ";
    cin >> b;
    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    cout << "\n Addition: " << add << endl;
    cout << " Subtraction: " << sub << endl;
    cout << " Multiplication: " << mul << endl;
    cout << " Division: " << div << endl;
    return 0;
}
