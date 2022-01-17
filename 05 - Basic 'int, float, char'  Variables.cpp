//
// Developed by
// Dileepa Bandara
// ©dileepabandara.dev
// https://github.com/dileepabandara
//

#include<iostream>

using namespace std;

int main() {
    int total, events;
    float average;
    char letter;
    cout << "Type your name letter : ";
    cin >> letter;
    cout << "Type your total: ";
    cin >> total;
    cout << "Type your events: ";
    cin >> events;
    average = total / events;
    cout << "Hi " << letter << "! Your total of " << total << " is divide with your " << events
         << " of events and it takes " << average << " for you " << endl;
    return 0;
}
