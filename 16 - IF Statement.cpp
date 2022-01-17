//
// Developed by
// Dileepa Bandara
// ©dileepabandara.dev
// https://github.com/dileepabandara
//

#include<iostream>

using namespace std;

int main() {
    cout << "Enter your age here : ";
    int age;
    cin >> age;

    if (age >= 18) {
        cout << "Adult" << endl;
    } else {
        cout << "Kid" << endl;
    }
    return 0;
}
