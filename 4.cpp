#include <iostream>
using namespace std;

int main() {
    cout << "|                          ";
    cout << "||||||||||||||||||||||||||||" << endl;
    for(int i = 0; i < 6; i++) {
        cout << "|  *  *  *  *  *  *  *  *  ";
        if (i % 2)
            cout << "||||||||||||||||||||||||||||" << endl;
        else
            cout << "|                          |" << endl;
    }
    for(int i = 0; i < 3; i++) {
        cout << "|                                                     |" << endl;
        cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
    }
    return 0;
}