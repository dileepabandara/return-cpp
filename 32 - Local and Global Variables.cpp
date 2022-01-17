//
// Developed by
// Dileepa Bandara
// ©dileepabandara.dev
// https://github.com/dileepabandara
//

#include<iostream>

using namespace std;

int a = 100;

void fun() {
    int b = 75;
    cout << "Local function inside the void " << b << endl;
    cout << "Global function inside the void " << a << endl;
}

int main() {
    int b = 75;
    cout << "Local function inside the main " << b << endl;

    fun();
    cout << "Global function inside the main " << a << endl;
    return 0;
}
