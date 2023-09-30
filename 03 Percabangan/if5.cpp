#include <iostream>
using namespace std;

int main() {
    char karakter;
    cin >> karakter;
    switch (karakter) {
        case 'A':
            cout << "Nilai kamu 100" << endl;
            break;
        case 'B':
            cout << "Nilai kamu 76 - 99" << endl;
            break;
        case 'C':
            cout << "Nilai kamu dibawah 76 :(" << endl;
            break;
        default:
            cout << "Nilai Invalid" << endl;
            break;
    }

    return 0;
}
