#include "snowman.hpp"

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

int main() {
    int num = 0;
    cout << "please enter the number of snowman you want to build: " << endl;
    cin >> num;
    if (num < 0) {
        cout << "You entered invalid number, Bye-Bye!" << endl;
    } else {
        int input;
        while (num != 0) {
            cout << "please enter the input: " << endl;
            cin >> input;
            try {
                cout << ariel::snowman(input) << endl;
                num--;
            } catch (exception &ex) {
                cout << "Caught exception: " << ex.what() << endl;
            }
        }
        cout << "Bye-Bye!" << endl;
    }
}