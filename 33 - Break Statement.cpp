//
// Developed by
// Dileepa Bandara
// ©dileepabandara.dev
// https://github.com/dileepabandara
//

#include<iostream>

using namespace std;

int main() {
    int count;
    for (count = 1; count <= 10; count++) {
        cout << count << endl;
        if (count == 7)
            break;
    }
    return 0;
}
