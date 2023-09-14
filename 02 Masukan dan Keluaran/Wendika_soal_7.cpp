#include <iostream>
using namespace std;

int main() {
    string names[12];
    
    cin >> names[0] >> names[1] >> names [2];
    cin >> names[3] >> names[4] >> names [5];
    cin >> names[6] >> names[7] >> names [8];
    cin >> names[9] >> names[10] >> names [11];
    
    cout << names[0] << " " << names[3] << " " << names[6] << " " << names[9] << endl;
    cout << names[1] << " " << names[4] << " " << names[7] << " " << names[10] << endl;
    cout << names[2] << " " << names[5] << " " << names[8] << " " << names[11] << endl;
    
    return 0;
}