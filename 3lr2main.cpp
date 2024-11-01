#include <iostream>
using namespace std;

int main() {
    double A, B, C;
    
    cout << "Введіть значення A, B, C: ";
    cin >> A >> B >> C;
    
    if (A < B && B < C) {
        A *= 2;
        B *= 2;
        C *= 2;
    } else {
     
        A = -A;
        B = -B;
        C = -C;
    }
    
    cout << "Нові значення A, B, C: " << A << " " << B << " " << C << endl;
    
    return 0;
}




