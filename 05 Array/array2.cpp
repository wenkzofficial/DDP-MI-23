#include <iostream>
using namespace std;

int main(){
    int nilai [5];

    nilai[0] = 32;
    nilai[1] = 42;
    nilai[2] = 76;
    nilai[3] = 31;
    nilai[4] = 57;

    for(int i=0; i < 5; i++){
        cout << "Nilai ke-" << i << "= " << nilai[i] <<endl;
    }
    
    return 0;
}