#include <iostream>

using namespace std;

main() {
    int n[10];
    cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4] >> n[5] >> n[6] >> n[7] >> n[8] >> n[9];
    for (int i = 9; i >= 0; i--) {
        cout << n[i] << " ";
    }
}