//
// Developed by
// Dileepa Bandara
// ©dileepabandara.dev
// https://github.com/dileepabandara
//

#include<iostream>

using namespace std;

int main() {
    cout << "enter a (a/b/c/d) grade: ";
    char grade;
    cin >> grade;
    switch (grade) {
        case 'a': {
            cout << "excellent" << endl;
            break;
        }

        case 'b': {
            cout << "very good" << endl;
            break;
        }

        case 'c': {
            cout << "good" << endl;
            break;
        }

        case 'd': {
            cout << "not bad" << endl;
            break;
        }

        default: {
            cout << "enter a valid grade" << endl;
            break;
        }

    }
    return 0;
}
