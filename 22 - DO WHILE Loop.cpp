//
// Developed by
// Dileepa Bandara
// ©dileepabandara.dev
// https://github.com/dileepabandara
//

#include<iostream>

using namespace std;

int main() {
    char name;
    do {
        cout << "hello..." << endl;
        cout << "press any other key to loop" << endl;
        cout << "press e to end" << endl;
        cin >> name;
    } while (name != 'e');

    return 0;
}
