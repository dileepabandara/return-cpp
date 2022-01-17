//
// Developed by
// Dileepa Bandara
// ©dileepabandara.dev
// https://github.com/dileepabandara
//

#include<iostream>

using namespace std;

int main() {
    int number, division_number, remainder;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter your division number: ";
    cin >> division_number;
    remainder = number % division_number;
    cout << "your remainder is " << remainder << endl;
    return 0;

}
