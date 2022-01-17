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
    for (count = 1; count <= 5; count++) {
        if (count == 3)
            continue;
        cout << " " << count << endl;
    }
    return 0;
}
