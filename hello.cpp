#include <iostream>
using namespace std;

int main() {
    cout << "Hello, what's your name? ";
    string name;
    cin >> name;
    cout << "Nice to meet you, " << name << "!" << endl;
    cout << "How old are you? ";
    int age;
    cin >> age;
    cout << "In 10 years, you'll be " << age + 10 << " years old." << endl;
    return 0;
}