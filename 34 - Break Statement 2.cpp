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
        int innercount;
        for (innercount = 1; innercount < 3; innercount++) {
            cout << " " << innercount << endl;
            if (innercount == 2)
                break;
        }
    }
    return 0;
}
