#include <iostream>
using namespace std;

int main() {
    string lines[5];

    for (int a = 0; a < 5; a++) 
        getline(cin, lines[a]);
    
    for (int a = 0; a < 5; a++) 
        cout << lines[a] << endl;
    
    return 0;
}
