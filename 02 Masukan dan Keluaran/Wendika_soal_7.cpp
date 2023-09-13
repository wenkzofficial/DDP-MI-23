#include <iostream>
using namespace std;

int main() {
    string names[12];
    for (int i = 0; i < 12; i++) {
        cin >> names[i];
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << names[i * 4 + j] << " ";
        }
        cout << endl;
    }
    return 0;
}