#include <iostream>
using namespace std;
 
int main() {
    int a, b, c;
    cout << "Введіть три числа: ";
    cin >> a >> b >> c;

    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
     int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
 
    cout << "Найменше число: " << min << endl;
    cout << "Найбільше число: " << max << endl;
 
    return 0;
}



