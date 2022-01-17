//
// Developed by
// Dileepa Bandara
// ©dileepabandara.dev
// https://github.com/dileepabandara
//

#include<iostream>

using namespace std;

int main() {
    cout << "Enter you age here: ";
    int age;
    cin >> age;
    cout << "have you pass the exam (yes)? ";
    char yes_no;
    cin >> yes_no;
    if (age > 21) {
        if (yes_no = 'y') {
            cout << "you can apply";
        } else {
            cout << "you can't apply";
        }
    } else {
        cout << "you can't apply";
    }
    return 0;
}
