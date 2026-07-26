#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 13) {
        cout << "You're a kid!" << endl;
    } else if (age < 20) {
        cout << "You're a teenager!" << endl;
    } else {
        cout << "You're an adult!" << endl;
    }

    return 0;
}