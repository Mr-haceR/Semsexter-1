#include <iostream>

using namespace std;

void printName(string name) {
    cout << name << endl;
}

main() {
    string name;
    cout << "Enter a name: ";
    cin >> name;
    while (true) {
        printName(name);
    }
}