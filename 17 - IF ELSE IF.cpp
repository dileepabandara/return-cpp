//
// Developed by
// Dileepa Bandara
// ©dileepabandara.dev
// https://github.com/dileepabandara
//

#include<iostream>

using namespace std;

int main() {
    cout << "Enter your grade A/a or B/b or C/c or F/f: ";
    char grade;
    cin >> grade;
    if (grade == 'A' || grade == 'a') {
        cout << "Congrats you got 75 =< 100 mark";
    } else if (grade == 'B' || grade == 'b') {
        cout << "Congrats you got 50 =< 75 mark";
    } else if (grade == 'C' || grade == 'c') {
        cout << "Congrats you got 35 =< 50 mark";
    } else if (grade == 'F' || grade == 'f') {
        cout << "Oppz you got 0 =< 35 mark";
    } else {
        cout << "Enter a valid grade";
    }
    return 0;
}
