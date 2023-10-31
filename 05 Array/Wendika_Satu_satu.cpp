#include <iostream>

using namespace std;

int main() {
    string satu;
    getline(cin, satu);

    for (int i = 0; i < satu.size(); i++) {
        cout << satu[i] << endl;
    }

    return 0;
}